#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;
  struct curl_slist *list = NULL;

  curl = curl_easy_init();
  if(curl) {
    /* add a custom one */
    list = curl_slist_append(list, "Shoesize: 10");
    /* remove an internally generated one */
    list = curl_slist_append(list, "Accept:");
    /* change an internally generated one */
    list = curl_slist_append(list, "Host: curl.example");
    /* provide one without content */
    list = curl_slist_append(list, "Empty;");

    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");

    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }

  return (int)res;
}
