#include <curl/curl.h>

int main(void)
{
  CURL *curl = curl_easy_init();
  CURLcode ret = CURLE_OK;
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/");
    curl_easy_setopt(curl, CURLOPT_PROXY, "socks5://local.example.com:1080");
    ret = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }
  return (int)ret;
}
