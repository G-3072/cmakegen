#ifndef FILES_H
#define FILES_H

#include <stdio.h>
#include <directories.h>
#include <path_handling.h>

int createFile(char* path);

int writeFile(FILE* fptr, char* content);

#endif