#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    printf("This is main ppid :%d\n",getpid());
    pid_t pid;
    pid = fork();
    if(pid>0){
    printf("parent going to sleep pid : %d and its child :%d\n",getpid(),pid);  
    sleep(3);
    printf("parent wake up pid:%d and its child: %d\n",getpid(),pid);  
    }
    else{
    printf("this is child :%d ppid: %d executed\n",getpid(),getppid());        
    exit(0);
        
    }    
}