#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    /* The interface needs to be a local existing interface over which you can
       connect to the host in the URL. It can also specify an IP address, but
       that address needs to be assigned one of the local network
       interfaces. */
    curl_easy_setopt(curl, CURLOPT_INTERFACE, "enp3s0");
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");

    res = curl_easy_perform(curl);

    /* always cleanup */
    curl_easy_cleanup(curl);
  }

  return (int)res;
}
