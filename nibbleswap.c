#include <stdio.h>
int swapNibble(int obj){
    return (( obj & 0x0F) << 4 | ( obj & 0xF0) >>4 );
}

int main()
{
    int x = 140;
    printf("%d\n", swapNibble(x));
    return 0;
}   

