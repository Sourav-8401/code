#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
int main(){
    printf("This is main process id: %d\n",getpid());
    pid_t pid;
    pid = fork();
    if(pid == 0){
        printf("This is the child process id: %d\n", getpid());
        printf("And its parent: %d\n", getppid());
    }
    else{
        printf("This is main process id: %d\n",getpid());
    }

    // pid_t pid;
    pid = fork();
    if(pid == 0){
        printf("This is the 2child process id: %d\n", getpid());
        printf("And its 2parent: %d\n", getppid());
    }
    else{
        printf("This is main 2process id: %d\n",getpid());
    }
    return 0;
}