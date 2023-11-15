#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
int main(){
    DIR *r;
    struct dirent *fin;
    r = opendir("temp1");
    while((fin = readdir(r)) != NULL){
        printf("%s\n", fin->d_name);
    }
    closedir(r);
    return 0;
}
























// int main(){
//     // int f1;
//     // f1 = mkdir("temp1",0777);
//     DIR *r;
//     struct dirent *fin;
//     r = opendir("temp1");
//     while((fin = readdir(r)) != NULL){
//         printf("%s\n", fin->d_name);
//         // printf("%ld\n", fin->d_ino);
//     }
//     closedir(r);
//     return 0;
// }