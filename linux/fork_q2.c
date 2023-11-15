#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
// #include <unistd.h>
int main()
{
    pid_t c1;
    printf("This is main process: %d\n", getpid());
    c1 = fork();
    if (c1 == 0)
    {
        printf("This is child2 id:%d & ppid: %d\n", getpid(), getppid());
        pid_t c2;
        c2 = fork();
        if (c2 == 0)
        {
            printf("This is child3 id:%d & ppid: %d\n", getpid(), getppid());
        }
    }
}