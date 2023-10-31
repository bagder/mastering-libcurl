#include <curl/curl.h>

int main(void)
{
  char *dest;
  CURLUcode rc;
  CURLU *url = curl_url();
  curl_url_set(url, CURLUPART_URL,
               "https://curl.se/this/cool/path/here.html", 0);

  curl_url_set(url, CURLUPART_URL, "../../second/take/moo.jpg", 0);

  rc = curl_url_get(url, CURLUPART_URL, &dest, 0);
  if(!rc && dest) {
    printf("URL: %s\n", dest);
    curl_free(dest);
  }

  curl_url_cleanup(url);

  return 0;
}
