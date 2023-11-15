#include <stdio.h>	   // for printf and scanf
#include <unistd.h>	   // for fork() & getpid()
#include <sys/types.h> // for fork() & getpid()

int main(){
	int n;
	pid_t pid;
	printf("enter the no of child process:");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		pid = fork();
		// printf("hello");
		if(pid==0){
			printf("I am child of for i = %d and my id is: %d & my p:%d\n",i,getpid(),getppid());
		}
	}

}





















// int main()
// {

// 	int n;

// 	printf("Current child process pid is %d %d\n", getpid(),getppid());
// 	printf("# Enter the no. of times you want to run the fork system call: ");
// 	scanf("%d", &n);
// 	pid_t pid;
// 	for(int i=0; i<n; i++){
// 		pid_t r;
// 		r = fork();
// 		if(r==0){
// 			printf("Current child process pid is %d %d\n", getpid(),getppid());
// 		}
// 	}

// 	return 0;
// }
