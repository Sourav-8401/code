#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    int f1;
    f1 = open("sample2.txt",O_RDONLY);

    char arr[25];
    if(f1<0){
        perror("error open");
        return 1;
    }
    if(read(f1, arr, 25) != 25){
        perror("Error read.");
        return 1;
    }

    arr[25] = '\0';

    printf("READ: %s\n", arr);
    return 0;
}