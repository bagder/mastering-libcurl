#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    long code;

    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/typo.html");

    res = curl_easy_perform(curl);
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &code);
    curl_easy_cleanup(curl);

    printf("Result: %d  Response code: %ld\n",
           (int)res, code);
  }

  return (int)res;
}
