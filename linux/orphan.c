#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    printf("This is ppid :%d\n",getpid());
    pid_t pid;
    pid = fork();
    if(pid ==0){
        printf("This is child going to sleep its ppid:%d\n",getppid());
        sleep(3);
        printf("This is the child after wakeup its ppid:%d\n",getppid());
    }
    else{
        printf("parent process is completed: %d\n",getpid());
    }
}