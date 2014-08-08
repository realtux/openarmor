#include "map_lib.h"

#ifndef API_H
#define API_H

const char * ACTION_TEST = "https://hm.svgflorida.com/api/";
const char * ACTION_LOOKUP_USER = "http://10.0.0.10:1337/api/lookup_user";

char * docurl(const char *, struct map_t *);

#endif