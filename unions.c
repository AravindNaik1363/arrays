#include <stdio.h>

union u
{
    char name[20];
    int a,b;
};

int main()
{
    union u u1;
    u1.a=10;
    printf("a=%d\n",u1.a);
    printf("b=%d",u1.b);
    u1.b=20;
    printf("\na=%d",u1.a);
    return 0;
}
