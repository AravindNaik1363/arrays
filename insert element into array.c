#include <stdio.h>
int main()
{
    int arr[50],n,i,key,loc;
    printf("enter size of arr:");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to insert");
    scanf("%d",&key);
    printf("enter which location to insert");
    scanf("%d",&loc);
    for(i=n-1;i>=loc;i--)//logic for shifting
    {
        arr[i+1]=arr[i];
    }
    arr[loc]=key;
    printf("final array after inserting the value is\n");
    for(i=0;i<=n;i++)
    {
       printf("%d",arr[i]); 
    }
    printf("\n");
    return 0;
}
