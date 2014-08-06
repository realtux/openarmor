#ifndef MAP_LIB_H
#define MAP_LIB_H

struct map_t {
    struct map_t *nxt;
    char * name;
    char * value;
} ;


struct map_t * map_create();
void map_free(struct map_t * map);
void map_set(struct map_t * m, char * name, char * value);
char * map_get(struct map_t * m, char * name);

#endif