#include <ctype.h>
#include <stdio.h>
#include <string.h>

char * trim(char * str) {
    size_t len = 0;
    char * frontp = str - 1;
    char * endp = NULL;

    if (str == NULL) return NULL;

    if (str[0] == '\0') return str;

    len = strlen(str);
    endp = str + len;

    while (isspace(*(++frontp)));
    while (isspace(*(--endp)) && endp != frontp);

    if (str + len - 1 != endp) {
        *(endp + 1) = '\0';
    } else if (frontp != str &&  endp == frontp) {
        *str = '\0';
    }

    endp = str;

    if (frontp != str) {
        while( *frontp ) *endp++ = *frontp++;
        *endp = '\0';
    }

    return str;
}