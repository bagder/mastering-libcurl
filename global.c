#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  curl_global_init(CURL_GLOBAL_DEFAULT);

  /* use libcurl, then before exiting... */

  curl_global_cleanup();

  return 0;
}
