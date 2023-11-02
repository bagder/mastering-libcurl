#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    struct curl_header *type;
    CURLHcode h;
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");
    res = curl_easy_perform(curl);
    h = curl_easy_header(curl, "Content-Type", 0, CURLH_HEADER, -1, &type);
    if(!h && type)
      printf("Content-Type: %s\n", type->value);

    curl_easy_cleanup(curl);
  }

  return (int)res;
}
