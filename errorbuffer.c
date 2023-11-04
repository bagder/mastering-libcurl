#include <curl/curl.h>

int main()
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    char errbuf[CURL_ERROR_SIZE] = "";
    curl_easy_setopt(curl, CURLOPT_ERRORBUFFER, errbuf);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
    curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/");
    res = curl_easy_perform(curl);
    if(res) {
      if(errbuf[0])
        fprintf(stderr, "Error: %s", errbuf);
      else
        fprintf(stderr, "Error: %s\n", curl_easy_strerror(res));
    }

    curl_easy_cleanup(curl);
  }
  return (int)res;
}

