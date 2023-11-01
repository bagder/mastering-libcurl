#include <curl/curl.h>
#include <locale.h>

int main(void)
{
  CURLU *url = curl_url();
  char *host;
  setlocale(LC_ALL, "");
  curl_url_set(url, CURLUPART_URL, "https://xn--rksmrgs-5wao1o.se/", 0);
  curl_url_get(url, CURLUPART_HOST, &host, CURLU_PUNY2IDN);
  printf("host: %s\n", host);
  curl_free(host);
  curl_url_cleanup(url);

  return 0;
}
