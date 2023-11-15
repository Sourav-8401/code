#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    int status;
    pid_t pid;
    pid = fork();
    if(pid == 0){
        printf("This is chid process running %d\n", getpid());
        sleep(2);
        printf("This is chid process exit: %d\n", getpid());
        exit(0);
    }
    else{
        printf("This is parent waiting for child %d\n",getpid());
        wait(&status);
        printf("This child process exited %d status %d\n",getpid(),status);
    }
    return 0;
}