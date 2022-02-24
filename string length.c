#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    unsigned int len;//we get length of string as 0 or positive values only so better declare unsigned int 
    printf("enter name:");
    gets(name);//gets takes spaces in between characters also
    printf("name is:%s",name);
    len=strlen(name); 
    printf("\nlength of '%s' is %d",name,len);
    return 0;
}

