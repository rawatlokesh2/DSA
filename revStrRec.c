#include <stdio.h>
#include <string.h>

char reverseStr(char *str)
{
    if( *str ){
        reverseStr(str + 1);
        printf("%c",*str);
        //reverseStr(str + 1);
    }
}

int main()
{
    char str[10] = "Hello\0";   
    reverseStr(str);

    return 0;
}