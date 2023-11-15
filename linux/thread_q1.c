#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

char str1[100], str2[100];
char result[100];

void* constr(){
    strcat(result, str1);
    strcat(result,str2);
    pthread_exit(NULL);
}

int main(){
    pthread_t t1;
    printf("enter the first str:");
    scanf("%s",str1);
    printf("enter the second str:");
    scanf("%s",str2);

    pthread_create(&t1, NULL, constr, NULL);
    pthread_join(t1,NULL);

    printf("str:%s", result);
    return 0;

    
}