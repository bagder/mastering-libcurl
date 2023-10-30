#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *easy = curl_easy_init();
  CURL *easy2 = curl_easy_init();

  curl_easy_setopt(easy, CURLOPT_URL, "https://example.com/");
  curl_easy_setopt(easy2, CURLOPT_URL, "https://curl.se/");

  CURLM *multi = curl_multi_init();
  curl_multi_add_handle(multi, easy);
  curl_multi_add_handle(multi, easy2);


  int still = 1;
  while(still) {
    CURLMsg *msg;
    CURLMcode mc = curl_multi_perform(multi, &still);

    if(still) {
      mc = curl_multi_poll(multi, NULL, 0, 1000, NULL);
      if(mc)
        break;
    }

    do {
      int queued;
      msg = curl_multi_info_read(multi, &queued);
      if(msg) {
        if(msg->msg == CURLMSG_DONE) {
          printf("Completed: %d\n", (int)msg->data.result);
        }
      }
    } while(msg);
  } /* loop while still is non-zero */


  curl_multi_remove_handle(multi, easy);
  curl_multi_remove_handle(multi, easy2);

  curl_multi_cleanup(multi);

  curl_easy_cleanup(easy);
  curl_easy_cleanup(easy2);

  return 0;
}
