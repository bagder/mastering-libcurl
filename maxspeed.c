#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    curl_off_t maxrecv = 31415;
    curl_off_t maxsend = 67954;

    curl_easy_setopt(curl, CURLOPT_MAX_RECV_SPEED_LARGE, maxrecv);
    curl_easy_setopt(curl, CURLOPT_MAX_SEND_SPEED_LARGE, maxsend);

    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");

    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);
  }

  return (int)res;
}
