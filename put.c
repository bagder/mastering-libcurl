#include <stdio.h>
#include <string.h>
#include <curl/curl.h>

struct reader {
  FILE *fp;
};

static size_t read_cb(char *dest, size_t size, size_t nmemb, void *userp)
{
  struct reader *r = userp;
  return fread(dest, size, nmemb, r->fp);
}

int main(void)
{
  CURL *curl;
  CURLcode res;
  FILE *this;

  struct reader readctx;

  this = fopen("hugefile.tar.gz", "r");
  if(!this)
    return 1;

  readctx.fp = this;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/upload.cgi");
    curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
    curl_easy_setopt(curl, CURLOPT_READFUNCTION, read_cb);
    curl_easy_setopt(curl, CURLOPT_READDATA, &readctx);

    res = curl_easy_perform(curl);
    if(res)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));

    curl_easy_cleanup(curl);
  }
  fclose(this);
  return 0;
}
