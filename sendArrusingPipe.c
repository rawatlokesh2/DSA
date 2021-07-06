#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    int fd[2];
    if(pipe(fd) == -1){
        return -2;
    }

    int pid = fork();

    if(pid == -1){
        printf("Something bad happens:\n");
        return 1;
    }

    if(pid == 0)
    {
        close(fd[0]);
        int n;
        int arr[10];

        srand(time(NULL));
        n = rand() % 10 + 1;

        for( int i = 0; i < n ; i++){
            arr[i] = rand() % 11;
        }
        if(write(fd[1], &n, sizeof(int)) < 0){
            return -3;
        }

        if(write(fd[1], arr, sizeof(int)*n) < 0){
            return -3;
        }
        close(fd[1]);
    } else {
        //Parent Process
        close(fd[1]);
        int arr[10];
        int n, i;

        if(read(fd[0], &n, sizeof(int)) < 0){
            return -4;
        }

        if(read(fd[0], arr, sizeof(int)*n) < 0){
            return -5;
        }

        close(fd[0]);

        int sum = 0;

        for( i=0; i<n ; i++){
          printf("Arr[%d] = %d\n", i, arr[i]); 
          sum += arr[i];
        }  

        printf("Sum of the array is = %d\n", sum);
        wait(NULL);
    }
    return 0;
}

