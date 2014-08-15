#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functions.h"

static void render_title() {
    printf("----------------------------------------------------------------\n");
    printf("  OpenArmor.org\n");
    printf("----------------------------------------------------------------\n");
}

static void render_menu() {
    printf("################################################################\n");
    printf("Possible Functions:\n");
    printf("[1] Lookup an OpenArmor user\n");
    printf("[2] Quit\n");
}

int main(void) {
    render_title();

    char buffer[8];
    int final_selection;

    makeachoice:
    render_menu();

    // get the user's selection
    printf("\nWhat would you like to do? ");
    fgets(buffer, sizeof(buffer), stdin);

    // check for newline and eat extra data if present
    if (strchr(buffer, '\n') == NULL) {
        int ch;

        while ((ch = getchar()) != '\n');
    }

    // convert to int
    final_selection = atoi(buffer);

    // sort out the decision
    switch (final_selection) {
        case 1:
            lookup_user();
            goto makeachoice;

        case 2:
            return 0;

        default:
            printf("This is not an available option\n");
            goto makeachoice;
    }

    return 0;
}