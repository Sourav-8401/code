#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

// int main(int argc, char *arr[]){
//     int dir;
//     dir = mkdir(arr[1], S_IRWXU | S_IRWXG);
//     if(dir<0){
//         printf("ERROR");
//     }
//     return 0;
// }
int main(){
    int dir;
    dir = mkdir("temp",0777);
    return 0;
}