#include <stdio.h>
#include <curl/curl.h>

struct progress {
  CURL *handle;
  size_t size;
};

static size_t progress_cb(void *clientp, curl_off_t dltotal,
                          curl_off_t dlnow, curl_off_t ultotal,
                          curl_off_t ulnow)
{
  struct progress *memory = clientp;

  (void)memory;
  /* use the values */

  return 0; /* all is good */
}

int main(void)
{
  CURL *curl;
  CURLcode res = CURLE_OK;

  curl = curl_easy_init();
  if(curl) {
    struct progress data = {curl, 1000000 };

    curl_easy_setopt(curl, CURLOPT_XFERINFODATA, &data);
    curl_easy_setopt(curl, CURLOPT_XFERINFOFUNCTION,
                     progress_cb);
    curl_easy_setopt(curl, CURLOPT_URL, "https://curl.se/");

    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);
  }

  return (int)res;
}
