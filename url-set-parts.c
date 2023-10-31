#include <curl/curl.h>

int main(void)
{
  char *output;
  CURLUcode rc;
  CURLU *url = curl_url();
  curl_url_set(url, CURLUPART_SCHEME, "https", 0);
  curl_url_set(url, CURLUPART_HOST, "curl.se", 0);
  curl_url_set(url, CURLUPART_PORT, "443", 0);
  curl_url_set(url, CURLUPART_PATH, "/index.html", 0);

  rc = curl_url_get(url, CURLUPART_URL, &output, 0);
  if(!rc && output) {
    printf("URL: %s\n", output);
    curl_free(output);
  }

  curl_url_cleanup(url);

  return 0;
}
