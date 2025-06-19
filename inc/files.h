#ifndef FILES_H
#define FILES_H

#include <stdio.h>

int createFile(char* path);

int writeFile(FILE* fptr, char* content);

#endif