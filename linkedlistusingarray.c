#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10
int top = -1;
int arr[MAX_SIZE];


void push(int ele)
{
    if(top == MAX_SIZE - 1){
        printf("Buffer Overflow.\n");
        return;
    }   

    arr[++top]=ele;
}

void pop()
{
    if(top == -1){
        printf("Buffer Underflow.\n");
    }
    top--;   
}

int Top()
{
    return arr[top];
}

void print()
{
    for ( int i = 0; i <= top; i++ )
    {
        printf("%d->", arr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    push(2); print();
    push(5); print();
    push(10); print();
    pop(); print();
    return 0;
}