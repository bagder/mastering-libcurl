#include <stdio.h>
#include <stdbool.h>
#include <curl/curl.h>

struct data {
  bool trace_ascii;
};

static int my_trace(CURL *handle, curl_infotype type,
                    char *data, size_t size,
                    void *userp)
{
  struct data *config = userp;
  curl_off_t xfer_id, conn_id;
  (void)config;

  curl_easy_getinfo(handle, CURLINFO_XFER_ID, &xfer_id);
  curl_easy_getinfo(handle, CURLINFO_CONN_ID, &conn_id);

  return 0;
}

int main()
{
  CURL *curl;
  CURLcode res = CURLE_OK;
  struct data config;

  config.trace_ascii = 1; /* enable ascii tracing */
  curl_global_trace("all");
  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_DEBUGFUNCTION, my_trace);
    curl_easy_setopt(curl, CURLOPT_DEBUGDATA, &config);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_URL, "https://example.com/");
    res = curl_easy_perform(curl);

    curl_easy_cleanup(curl);
  }
  return (int)res;
}

