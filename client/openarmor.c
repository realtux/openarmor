#include <stdio.h>
#include "json.h"

void render_menu() {
    printf("---------------------------------\n");
    printf("          OpenArmor.org\n");
    printf("---------------------------------\n");
}

int main() {
    render_menu();
    
    docurl();

    return 0;
}