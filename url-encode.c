#include <curl/curl.h>

static void showpath(CURL *url, const char *desc)
{
  char *path;
  curl_url_get(url, CURLUPART_PATH, &path, 0);
  printf("%-22s", path);
  curl_free(path);
  curl_url_get(url, CURLUPART_PATH, &path, CURLU_URLDECODE);
  printf(" %-22s %s\n", path, desc);
  curl_free(path);
}

int main(void)
{
  CURLU *url = curl_url();
  curl_url_set(url, CURLUPART_URL,
               "https://www.example/%20works%3f/here.html", 0);
  printf("%-22s %-22s Description\n", "Raw", "Decoded");
  showpath(url, "first");

  curl_url_set(url, CURLUPART_PATH, "/no%20no%20no/", 0);
  showpath(url, "update");

  curl_url_set(url, CURLUPART_PATH, "???", CURLU_URLENCODE);
  showpath(url, "qs");

  curl_url_cleanup(url);

  return 0;
}
