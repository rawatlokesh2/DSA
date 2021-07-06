
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *rollDice(){
    int value = (rand() % 6) + 1;
    int *result = malloc(sizeof(int));
    *result = value;
    printf("Function res = %p\n", result);
    return (void *)result;
}

pthread_mutex_t mutex; 

int main(int argc, char* argv[])
{
    int i = 0;
    int *res;

    srand(time(NULL));
    pthread_t th;

    //pthread_mutex_init(&mutex, NULL);

    
    //for( i = 0; i < 2; i++ ){
        if(pthread_create(&th, NULL, &rollDice, NULL) != 0){
            return 1;
        }
    //}

    //for( i = 0; i < 2; i++){
        if(pthread_join(th, (void**) &res) != 0){
            return 2;
        }
    //}


    //pthread_mutex_destroy(&mutex);
  
    printf("Main res = %p\n", res);
    printf("Result of first Dice= %d\n", *res);
    free(res);

    //printf("Result of second Dice= %d\n", res[1]);



    return 0;

}