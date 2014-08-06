#include <stdio.h>
#include <json.h>
#include <string.h>

#include "api.h"

enum json_type type;

json_object * oa_json_get_object(json_object * jobj, char * object_name) {
    json_object_object_foreach(jobj, key, val) {
        type = json_object_get_type(val);

        if (type == json_type_object)
            if (strcmp(key, object_name) == 0)
                return val;
    }

    return NULL;
}

json_object * oa_json_get_array(json_object * jobj, char * array_name) {
    json_object_object_foreach(jobj, key, val) {
        type = json_object_get_type(val);

        if (type == json_type_array)
            if (strcmp(key, array_name) == 0)
                return val;
    }

    return NULL;
}

char * oa_json_get_string(json_object * jobj, char * string_name) {
    json_object_object_foreach(jobj, key, val) {
        type = json_object_get_type(val);

        if (type == json_type_string)
            if (strcmp(key, string_name) == 0)
                return (char *) json_object_get_string(val);
    }

    return NULL;
}

void lookup_user() {
    char * s = docurl();

    // convert to json
    json_object * jobj = json_tokener_parse(s);   
    //json_parse(jobj);  

    printf("%s\n", json_object_to_json_string(jobj));

    char * origin = oa_json_get_string(jobj, "origin");

    printf("origin: %s\n", origin);

    //json_object * headers = oa_json_get_object(jobj, "headers");

    //char * connection = oa_json_get_string(headers, "Connection");

    //printf("connection: %s\n", connection);
}