//Reg- Number 12211334
//Name sourav kumar
//Roll- Number 76
//Section k22sb
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define N 10
int count = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t fullBox = PTHREAD_COND_INITIALIZER;
pthread_cond_t emptyBox = PTHREAD_COND_INITIALIZER;

void getChocolateFromBox() {
    pthread_mutex_lock(&mutex);
    
    while (count == 0) {
        printf("Child: Box is empty. Waking up the mother.\n");
        pthread_cond_wait(&emptyBox, &mutex);
    }
    
    count--;
    printf("Child: Got a chocolate. Remaining: %d\n", count);
    
    if (count == N - 1) {
        printf("Child: Signaling the mother to refill.\n");
        pthread_cond_signal(&fullBox);
    }
    
    pthread_mutex_unlock(&mutex);
}

void refillChocolateBox() {
    pthread_mutex_lock(&mutex);
    
    while (count > 0) {
        printf("Mother: Waiting for the box to be empty.\n");
        pthread_cond_wait(&fullBox, &mutex);
    }
    
    count = N;
    printf("Mother: Refilled the box with %d chocolates.\n", N);
    
    pthread_cond_broadcast(&emptyBox);
    
    pthread_mutex_unlock(&mutex);
}

void* child_thread(void* arg) {
    while (1) {
        getChocolateFromBox();
    }
    return NULL;
}

void* mother_thread(void* arg) {
    while (1) {
        refillChocolateBox();
    }
    return NULL;
}

int main() {
    pthread_t child, mother;
    
    pthread_create(&child, NULL, child_thread, NULL);
    pthread_create(&mother, NULL, mother_thread, NULL);
    
    pthread_join(child, NULL);
    pthread_join(mother, NULL);
    
    return 0;
}