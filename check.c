#include<stdio.h>
char * fun1()
{
    char *a = "Hello";
    return a;
}
char * fun2()
{
    char b[10] = "Hello";
    return b;
}
char * fun3()
{
    static char d[10] = "Hello";
    return d;
}
int main() {
   char *a = fun1();
   //char *b = fun2();
   char *c = fun3();
   printf("%s\n",a);
   //printf("%s\n",b);
   printf("%s\n",c);
   return 0;
}