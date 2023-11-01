#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *e;
  CURL *e2;
  CURLcode res = CURLE_OK;
  CURLSH *sh = curl_share_init();

  curl_share_setopt(sh, CURLSHOPT_SHARE, CURL_LOCK_DATA_COOKIE);

  e = curl_easy_init();
  e2 = curl_easy_init();

  curl_easy_setopt(e, CURLOPT_URL, "https://curl.se/");
  curl_easy_setopt(e2, CURLOPT_URL, "https://curl.se/");

  curl_easy_setopt(e, CURLOPT_SHARE, sh);
  curl_easy_setopt(e2, CURLOPT_SHARE, sh);

  curl_easy_perform(e);
  curl_easy_perform(e2);

  curl_easy_cleanup(e);
  curl_easy_cleanup(e2);

  curl_share_cleanup(sh);

  return (int)res;
}
