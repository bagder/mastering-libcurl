#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    char *ct;
    char *ip;
    curl_off_t dlsize;

    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");

    curl_easy_perform(curl);
    curl_easy_getinfo(curl, CURLINFO_CONTENT_TYPE, &ct);
    curl_easy_getinfo(curl, CURLINFO_SIZE_DOWNLOAD_T,
                      &dlsize);
    curl_easy_getinfo(curl, CURLINFO_PRIMARY_IP, &ip);
    curl_easy_cleanup(curl);
  }

  return (int)res;
}
