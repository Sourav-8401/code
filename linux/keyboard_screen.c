#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    char buff[20];
    read(0,buff,15);
    write(1,buff,15);
}
