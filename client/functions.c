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

int oa_array_length(json_object * jarray) {
    return json_object_array_length(jarray);
}

char * oa_as_string(json_object * obj) {
    return (char *) json_object_get_string(obj);
}

void lookup_user() {
    //char * s = docurl();
    char * s = "{\"name\":\"brian\",\"age\":29,\"friends\":[\"kevin\",\"nate\",\"ryan\"],\"messages\":{\"for_someone\":\"hi\",\"for_anyone\":\"no\"}}";

    // convert to json
    json_object * jobj = json_tokener_parse(s);   
    //json_parse(jobj);  

    printf("%s\n", json_object_to_json_string(jobj));

    char * name = oa_json_get_string(jobj, "name");

    printf("name: %s\n", name);

    json_object * messages = oa_json_get_object(jobj, "messages");

    char * message = oa_json_get_string(messages, "for_someone");

    printf("for_someone: %s\n", message);

    json_object * friends = oa_json_get_array(jobj, "friends");

    int i;
    int friends_length = oa_array_length(friends);
    json_object * frien;

    for (i = 0; i < friends_length; ++i) {
        frien = json_object_array_get_idx(friends, i);

        printf("friend: %s\n", oa_as_string(frien));
    }
}