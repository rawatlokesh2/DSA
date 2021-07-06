#include <stdio.h>

void isPrime(int var)
{
    int flag = 0;
    for (int i=2; i<var/2; i++)
    {
        if(var%i == 0){
            flag = 1;
            break;
        }  
    } 
    if(!flag){
        printf("%d ", var);
    }
}

int main()
{
    int a,b;
    
    printf("Enter range: ");
    scanf("%d\n%d", &a, &b);

    for ( int i = a ; i <= b; i++ ){
        isPrime(i);
    }
    return 0;
}