#include <files.h>

int createFile(char* path){
    FILE *fptr = fopen(path, "w");
    if (fptr != NULL){
        //file generated successfully
        fclose(fptr);
        return 0;
    }else{
        //file creation failed
        return 1;
    }
}

int writeFile(FILE* fptr, char* content){
    if (fptr == NULL) return 1;
    fprintf(fptr, content);
}
