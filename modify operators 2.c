#include<stdio.h>
int main()
{
    int a=2,b=3;
    b= a++ + b--;
    printf("a=%d,b=%d",a,b);
    a= a-- + ++b;
    printf("\n a=%d,b=%d",a,b);
    b= ++a + --b;
    printf("\n value of a:%d,value of b:%d",a,b);
    return 0;
}

