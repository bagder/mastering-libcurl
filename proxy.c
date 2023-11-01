#include <curl/curl.h>

int main(void)
{
  CURL *curl = curl_easy_init();
  CURLcode ret = CURLE_OK;
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/");
    curl_easy_setopt(curl, CURLOPT_PROXY, "local.example.com:1080");
    /* set the proxy type */
    curl_easy_setopt(curl, CURLOPT_PROXYTYPE, CURLPROXY_SOCKS5);
    ret = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }
  return (int)ret;
}
