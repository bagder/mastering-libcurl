#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    struct curl_header *h;
    struct curl_header *prev = NULL;
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");
    res = curl_easy_perform(curl);
    while((h = curl_easy_nextheader(curl, CURLH_HEADER, 0, prev))) {
      printf("%s: %s\\n", h->name, h->value);
      prev = h;
    }
    curl_easy_cleanup(curl);
  }
  return (int)res;
}
