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























// int main(){
//     printf("This is p1 and id:%d\n",getpid());
//     pid_t p1;
//     p1 = fork();
//     if(p1==0){
//         printf("This is p2 id:%d and ppid: %d\n",getpid(),getppid());
//         // exit(0);
//         pid_t p2;
//         if(p2 == 0){
//             printf("This is p3 id:%d and its a orphan ppid: %d\n",getpid(),getppid());
//             sleep(1);
//         }
//     }
//     else{
//         printf("This is p4 id:%d creating zombie ppid:%d\n",getpid(),getppid());
//         sleep(3);
//         pid_t p4;
//         if(p4 ==0){
//         printf("This is p5 id:%d and it is a zombie ppid:%d\n",getpid(),getppid());
//         exit(0);
//         }
//     }
    
// }
