#ifndef MODULES_H
#define MODULES_H

#include <stdlib.h>

#define MAX_SOURCES 32
#define MAX_HEADERS 32

typedef struct{
    char* path;
    char* name;
    unsigned char type;
    char* sources[MAX_SOURCES];
    size_t source_count;
    char* headers[MAX_HEADERS];
    size_t header_count;
}Module_s;

void addModule(Module_s *module);


#endif