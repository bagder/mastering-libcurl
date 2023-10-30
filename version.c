#include <string.h>
#include <curl/curl.h>

int main(int argc, char *argv[])
{
  curl_version_info_data *v;
  int i;
  curl_global_init(CURL_GLOBAL_DEFAULT);

  printf("curl_version: %s\n", curl_version());

  v = curl_version_info(CURLVERSION_NOW);
  printf("v->version: %s\n", v->version);
  printf("v->version_num (%x) %d.%d.%d\n", v->version_num,
         v->version_num >> 16, (v->version_num >> 8) & 0xff,
         v->version_num & 0xff);
  printf("v->feature_names[]: ");
  for(i=0; v->feature_names[i]; i++) {
    printf("%s, ", v->feature_names[i]);
  }
  printf("\nv->protocols[]: ");
  for(i=0; v->feature_names[i]; i++) {
    printf("%s, ", v->protocols[i]);
  }
  printf("\n");

  curl_global_cleanup();

  return 1;
}
