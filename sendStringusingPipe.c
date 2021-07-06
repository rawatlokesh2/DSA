#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    int fd[2];
    if(pipe(fd) == -2){
        return 1;
    }

    int pid = fork();

    if(pid == -1){
        return -1;
    }

    if(pid == 0){
        //Child
        close(fd[0]);

    }
    return 0;
}