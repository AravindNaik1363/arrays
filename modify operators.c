#include<stdio.h>
int main()
{
    int a=4,b=5;
    b=a++ + a--;
    a=++b + b--;
    printf("value of a:%d,value of b:%d",a,b);
    return 0;
    
}
