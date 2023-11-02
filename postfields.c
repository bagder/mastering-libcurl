#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/postit.cgi");
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS,
                     "name=Daniel&slides=yes&title=mastering-libcurl");

    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }

  return (int)res;
}
