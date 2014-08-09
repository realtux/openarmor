#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <curl/curl.h>

#include "map_lib.h"

struct string {
    char * contents;
    size_t len;
};

static void * myrealloc(void * ptr, size_t size) {
    if (ptr)
        return realloc(ptr, size);
    else
        return malloc(size);
}

static size_t write_result(void * ptr, size_t size, size_t nmemb, struct string * data) {
    size_t realsize = size * nmemb;
    struct string *mem = (struct string *)data;

    mem->contents = (char *)myrealloc(mem->contents, mem->len + realsize + 120);

    if (mem->contents) {
        memcpy(&(mem->contents[mem->len]), ptr, realsize);
        mem->len += realsize;
        mem->contents[mem->len] = 0;
    }
    
    return realsize;
}

char * docurl(const char * action, struct map_t * params) {
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();

    char * final_string;

    if (curl) {
        struct string s;
        s.contents = NULL;
        s.len = 0;

        curl_easy_setopt(curl, CURLOPT_URL, action);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        // add params for the post
        char * final_params = malloc(1);
        strcpy(final_params, "");

        struct map_t * p;
        for (p = params; p != NULL; p = p->nxt) {
            // reallocate
            final_params = myrealloc(final_params, strlen(final_params) + strlen(p->name) + strlen(p->value) + 3);

            strcat(final_params, p->name);
            strcat(final_params, "=");
            strcat(final_params, p->value);
            strcat(final_params, "&");
        }

        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, final_params);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_result);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &s);

        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        } else {
            final_string = s.contents;
        }

        free(final_params);
        free(s.contents);

        curl_easy_cleanup(curl);
    }

    return final_string;
}