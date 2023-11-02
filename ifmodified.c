#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    curl_off_t when = 1698793200; /* November 1, 2023 */
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/index.html");
    curl_easy_setopt(curl, CURLOPT_TIMEVALUE_LARGE, when);
    curl_easy_setopt(curl, CURLOPT_TIMECONDITION,
                     (long)CURL_TIMECOND_IFMODSINCE);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }

  return (int)res;
}
