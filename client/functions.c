#include <stdio.h>
#include <curl/curl.h>
#include <json.h>

#include "api.h"

void lookup_user() {
    char * s = docurl();

    // convert to json
    json_object * jobj = json_tokener_parse(s);     

    printf("%s\n", json_object_to_json_string(jobj));
}