#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <pthread.h>
#include <unistd.h>
int len;
char str[100];
void* lent(){
    len=strlen(str);
    pthread_exit(NULL);
}
int main(){
    printf("Enter the string:");
    scanf("%s",str);
    pthread_t t1;
    pthread_create(&t1,NULL,lent,NULL);
    pthread_join(t1,NULL);
    printf("len is %d\n",len);
    return 0;
}