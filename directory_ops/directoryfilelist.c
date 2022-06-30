#include <stdio.h>
#include <string.h>
#include <dirent.h>


void listFiles(const char* directoryName){
   
    DIR* dir = opendir(directoryName);

    if(dir == NULL){
    return;
}

    struct dirent* entry;
    entry = readdir(dir);
    while(entry!=NULL){

    printf("%s\n", entry->d_name);
    entry = readdir(dir);

}

closedir(dir);

}

int main(){

   listFiles(".");

return 0;
}