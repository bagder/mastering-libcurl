#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

struct memory {
  char *ptr;
  size_t size;
};

static size_t
write_cb(void *contents, size_t size, size_t nmemb, void *userp)
{
  struct memory *mem = userp;
  size_t realsize = size * nmemb;
  char *ptr = realloc(mem->ptr, mem->size + realsize + 1);
  if(!ptr) {
    fprintf(stderr, "not enough memory\n");
    return 0;
  }

  mem->ptr = ptr;
  memcpy(&mem->ptr[mem->size], contents, realsize);
  mem->size += realsize;
  mem->ptr[mem->size] = 0;

  return realsize;
}

int main(void)
{
  CURL *easy;
  CURLcode res;
  struct memory chunk;

  chunk.ptr = malloc(1); /* grown as needed */
  chunk.size = 0;

  curl_global_init(CURL_GLOBAL_ALL);

  easy = curl_easy_init();

  curl_easy_setopt(easy, CURLOPT_URL, "https://curl.se/");
  curl_easy_setopt(easy, CURLOPT_WRITEFUNCTION, write_cb);
  curl_easy_setopt(easy, CURLOPT_WRITEDATA, (void *)&chunk);
  curl_easy_setopt(easy, CURLOPT_USERAGENT, "agent/1.22");

  res = curl_easy_perform(easy);

  if(res == CURLE_OK)
    printf("%lu bytes retrieved\n", (unsigned long)chunk.size);

  curl_easy_cleanup(easy);

  free(chunk.ptr);

  curl_global_cleanup();

  return 0;
}
