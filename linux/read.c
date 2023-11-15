#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int fd;
	char buf[20]="Hello, World!\n";
	fd = open("sample.txt",O_RDWR | O_CREAT, 0666);
	if(fd<0){
		perror("open");
		return 1;
	}
	if(write(fd, buf, 15) != 15){
		perror("write");
		return 1;
	}
	close(fd);
	return 0;
}
