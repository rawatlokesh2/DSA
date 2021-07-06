#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    int p = fork();

    if(p == 0)
    {
        printf("Hello World\n");
        
    }
    else
    {
        wait(NULL);
        printf("Child Exited\n");
    }

    return 0;
}