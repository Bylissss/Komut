#if defined(_WIN32)
    #include "Windows.h"
#elif defined(__linux__)
    #include "sys/stat.h"
    #include "sys/types.h"
#endif

#include "stdio.h"
#include "../../komut.h"

#if defined(_WIN32)
   void touch_create_file(char* path){
        CreateFile2(path, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, CREATE_NEW, NULL);
   }

#elif defined(__linux__)
    void touch_create_file(char* path){
        mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
    }
#endif

int main(int argc, char** argv){

        printf("hello");
        return 0;

}