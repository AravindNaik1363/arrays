
#include <stdio.h>
int main()
{
    int arr[5],i;
    printf("enter elements in array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
       printf("array elements are:%d\n",arr[i]); 
    }
    
    return 0;
}

