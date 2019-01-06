#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

pthread_cond_t cond;
pthread_mutex_t mutex;

int data=0;

void *producer(){
    printf("producer is run\n");
    while(1){
        printf("!!!!!%d\n",__LINE__);
        pthread_mutex_lock(&mutex);
        printf("!!!!!%d\n",__LINE__);
        data++;
        printf("producer data is %d ,send signal\n",data);
        pthread_mutex_unlock(&mutex);
        pthread_cond_broadcast(&cond);
        sleep(1);
    }
}

void *consumer(void *num){
    printf("consumer %d is run\n",*(int*)num);
    while (1) {
        pthread_mutex_lock(&mutex);
        printf("!!!!!%d\n",__LINE__);
        while (data <= 0) {
            pthread_cond_wait(&cond,&mutex);
            //printf("!!!!!%d\n",__LINE__);
        };
        while(data>0) {
            printf("consumer %d data is %d\n", *(int *) num, data);
            data--;
            printf("consumer %d consume ,now data is %d\n", *(int *) num, data);
        }
        pthread_mutex_unlock(&mutex);
        sleep(2);
    }
}

int main() {
    printf("Hello, World!\n");
    int num1,num2,num3;
    num1 = 1;
    num2 = 2;
    //num3 = 3;
    pthread_t prod;
    pthread_t consumer1;
    pthread_t consumer2;
    //pthread_t consumer3;

    pthread_create(&consumer1,NULL, &consumer,&num1);
    pthread_create(&consumer2,NULL, &consumer,&num2);
    //pthread_create(&consumer3,NULL, &consumer,&num3);
    pthread_create(&prod,NULL, &producer,NULL);

    pthread_join(prod,NULL);
    pthread_join(consumer1,NULL);
    pthread_join(consumer2,NULL);
    //pthread_join(t4,NULL);
    return 0;
}