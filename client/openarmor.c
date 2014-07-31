#include <stdio.h>
#include <string.h>
#include <json.h>
#include "api.h"

void render_menu() {
    printf("---------------------------------\n");
    printf("          OpenArmor.org\n");
    printf("---------------------------------\n");
}

int main() {
    render_menu();

    char * s = docurl();

    // convert to json
    json_object * jobj = json_tokener_parse(s);     

    printf("%s\n", json_object_to_json_string(jobj));

    return 0;
}