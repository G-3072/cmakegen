#include <modules.h>
#include <files.h>
#include <stdint.h>

void addModule(Module_s *module){
    // create directories
    createDir(module->path);
    createDir(appendPath(module->path, "src"));
    createDir(appendPath(module->path, "inc"));

    // create CmakeLists
    createFile(appendPath(module->path, "CMakeLists.txt"));

    // create source files
    for(uint8_t i = 0; i < module->source_count; i++){

    }
    // create header files
    for(uint8_t i = 0; i < module->header_count; i++){
        
    }
}
