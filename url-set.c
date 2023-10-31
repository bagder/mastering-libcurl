#include <curl/curl.h>

int main(void)
{
  CURLUcode rc;
  CURLU *url = curl_url();
  rc = curl_url_set(url, CURLUPART_URL,
                    "https://example.com", 0);
  if(!rc) {
    char *norm;
    rc = curl_url_get(url, CURLUPART_URL, &norm, 0);
    if(!rc && norm) {
      printf("URL: %s\n", norm);
      curl_free(norm);
    }
  }

  curl_url_cleanup(url);

  return 0;
}
