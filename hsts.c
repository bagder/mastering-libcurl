#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");
    curl_easy_setopt(curl, CURLOPT_HSTS_CTRL, CURLHSTS_ENABLE);
    curl_easy_setopt(curl, CURLOPT_HSTS, "hsts-cache.txt");
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }

  return (int)res;
}
