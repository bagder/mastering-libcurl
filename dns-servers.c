#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");
    curl_easy_setopt(curl, CURLOPT_DNS_SERVERS,
                     "192.168.1.100:53,192.168.1.101");
    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);
  }

  return (int)res;
}
