#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(){
	int f1;
	char buf[30] = "My own file created my me.";
	f1 = open("sample2.txt", O_RDWR | O_CREAT);
	write(f1, buf, 25);
	close(f1);
	return 0;
}
