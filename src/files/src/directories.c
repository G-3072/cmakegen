#include <directories.h>

#include <sys/stat.h>
#include <sys/types.h>

#define DIR_PERMISSION S_IRWXU | S_IRWXG | S_IRWXO

int createDir(char* path){
    return mkdir(path, DIR_PERMISSION);
}
