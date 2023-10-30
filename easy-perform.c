#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *easy = curl_easy_init();
  CURLcode result;

  curl_easy_setopt(easy, CURLOPT_URL,
                   "https://curl.se/");

  result = curl_easy_perform(easy);
  curl_easy_cleanup(easy);

  return (int)result;
}


