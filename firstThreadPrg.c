#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *routine(){
    printf("Test from threads\n");
}

int main(int argc, char *argv[])
{
    pthread_t t1;

    pthread_create(&t1, NULL,*routine, NULL);

    //Acts as wait function for threads
    pthread_join(t1, NULL);
    
    return 0;
}