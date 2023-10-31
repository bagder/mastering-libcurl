#include <curl/curl.h>

int main(void)
{
  char *port;
  char *query;
  CURLU *url = curl_url();
  curl_url_set(url, CURLUPART_URL,
               "https://example.com:8080/donkey.php?age=7", 0);
  curl_url_get(url, CURLUPART_PORT, &port, 0);
  curl_url_get(url, CURLUPART_QUERY, &query, 0);
  if(port) {
    printf("Port: %s\n", port);
    curl_free(port);
  }
  if(query) {
    printf("Query: %s\n", query);
    curl_free(query);
  }
  curl_url_cleanup(url);

  return 0;
}
