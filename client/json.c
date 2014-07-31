#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <curl/curl.h>

struct string {
	char * ptr;
	size_t len;
};

void init_string(struct string * s) {
	// allocate
	s->len = 0;
	s->ptr = malloc(s->len + 1);

	// make sure the pointer is good
	if (s->ptr == NULL) {
		fprintf(stderr, "malloc() failed, shit\n");

		exit(EXIT_FAILURE);
	}

	s->ptr[0] = '\0';
}

size_t write_result(void * ptr, size_t size, size_t nmemb, struct string * s) {
	// get the new length of the buffer
	size_t new_len = s->len + size * nmemb;

	// reallocate the buffer size
	s->ptr = realloc(s->ptr, new_len + 1);

	// make sure the pointer is good
	if (s->ptr == NULL) {
		fprintf(stderr, "malloc() failed, shit\n");

		exit(EXIT_FAILURE);
	}

	// copy the memory
	memcpy(s->ptr + s->len, ptr, size * nmemb);
	s->ptr[new_len] = '\0';
	s->len = new_len;

	return size * nmemb;
}

char * docurl(void) {
	CURL *curl;
	CURLcode res;

	curl = curl_easy_init();

	char * final_string;

	if (curl) {
		// place for the result
		struct string s;
		init_string(&s);

		curl_easy_setopt(curl, CURLOPT_URL, "http://httpbin.org/get");
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_result);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &s);

		res = curl_easy_perform(curl);

		if (res != CURLE_OK) {
			fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
		} else {
			final_string = s.ptr;
		}

		free(s.ptr);

		curl_easy_cleanup(curl);
	}

	return final_string;
}