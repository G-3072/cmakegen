#include <main.h>


int main(int argc, char *argv[]){

    char* path = "/home/gasc/projects/cmakegen";

    createDir(appendPath(path, "test"));
    createDir(appendPath(path, "test/src"));
    createDir(appendPath(path, "test/inc"));

    createFile(appendPath(path, "test/src/main.c"));
    createFile(appendPath(path, "test/inc/main.h"));
    createFile(appendPath(path, "test/CMakeLists.txt"));

    return 0;
}