#include<stdio.h>
int StringLength(char[]);

int StringLength(char s[])//user defined function definition
{
    int i=0,count=0;
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}

int main()
{
    char name[20];
    unsigned int len;
    printf("enter name:");
    gets(name);//gets takes spaces in between characters also
    printf("name is:%s",name);
    len=StringLength(name);//we get length of string as 0 or positive values only 
    
    printf("\nlength of '%s' is %d",name,len);
    return 0;
}

