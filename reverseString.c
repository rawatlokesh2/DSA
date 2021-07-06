#include <stdio.h>
#include <string.h>

void reverseStr(char str[], int len)
{
    char temp;
    char localStr[len];
    strncpy(localStr, str, len);

    printf("Actual String is: %s\n",localStr);


    for (int i = 0; i < len/2 ; i++){
        temp = localStr[i];
        localStr[i] = localStr[len - i - 1];
        localStr[len - i - 1] = temp;
    }

    printf("Reversed String is : %s\n", localStr);
}

int main()
{
    char str[10] = "Hello\0";
    
    int len = strlen(str);
    reverseStr(str, len);
    return 0;
}