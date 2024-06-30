#include <stdio.h>
int main()
{
    int a=10;
    int b=&a;
    b=1000;
    printf("%d %d %d",a,b,&a);
}