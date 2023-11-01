#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    /* Try to use a local port number between 20000-20009 */
    curl_easy_setopt(curl, CURLOPT_LOCALPORT, 20000L);
    /* 10 means number of attempts, which starts with the number set in
       CURLOPT_LOCALPORT. The lowe value set, the smaller the change it will
       work. */
    curl_easy_setopt(curl, CURLOPT_LOCALPORTRANGE, 10L);
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");

    res = curl_easy_perform(curl);

    /* always cleanup */
    curl_easy_cleanup(curl);
  }

  return (int)res;
}
