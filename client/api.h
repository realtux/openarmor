#include "map_lib.h"

#ifndef API_H
#define API_H

const char * ACTION_TEST = "https://hm.svgflorida.com/api/";
const char * ACTION_LOOKUP_USER = "http://httpbin.org/post";

char * docurl(const char *, struct map_t *);

#endif