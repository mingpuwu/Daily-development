#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

pthread_cond_t cond;
pthread_mutex_t mutex;

int data=0;

void *thread1(){
    printf("thread 1 is run\n");
    while(1){
        pthread_mutex_lock(&mutex);
        data++;
        printf("thread 1 data is %d ,send signal\n",data);
        pthread_cond_signal(&cond);
        pthread_mutex_unlock(&mutex);
        sleep(1);
    }
}

void *thread2(){
    printf("thread 2 is run\n");
    while (1) {
        while (data <=0) {
            pthread_cond_wait(&cond, &mutex);
        }
        pthread_mutex_lock(&mutex);
        data--;
        printf("thread 2 data is %d\n", data);
        pthread_mutex_unlock(&mutex);
        sleep(2);
    }
}

int main() {
    printf("Hello, World!\n");
    pthread_t t1;
    pthread_t t2;
    pthread_create(&t2,NULL,&thread2,NULL);
    pthread_create(&t1,NULL,&thread1,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    return 0;
}