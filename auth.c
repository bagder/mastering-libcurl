#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_USERNAME, "clark");
    curl_easy_setopt(curl, CURLOPT_PASSWORD, "kent");
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");

    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);
  }

  return (int)res;
}
