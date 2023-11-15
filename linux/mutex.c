#include <stdio.h>
#include <pthread.h>

pthread_mutex_t m1;

int main(){
    pthread_mutex_init(&m1,NULL);
    pthread_mutex_lock(&m1);
    printf("Inside critical section.\n");
    pthread_mutex_unlock(&m1);
    pthread_mutex_destroy(&m1);
}
