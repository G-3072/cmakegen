#include <paths.h>

#include <string.h>
#include <stdlib.h>
// #include <stdint.h>

#include <linux/limits.h>

char* appendPath(char* path, char *name){
    //calculate size & allocate memory
    size_t pathLen = strlen(path) + strlen(name) + 2; // +2 for added / and \0
    char* newPath = malloc(pathLen);
    
    strcpy(newPath, path);
    //if path doesnt end with /, add one for correct path
    if (path[strlen(path)-1] != '/' && name[0] != '/'){
        strcat(newPath, "/");
    }
    strcat(newPath, name);
    return newPath;
}
