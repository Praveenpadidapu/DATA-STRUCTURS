#include <stdio.h>
int main()
{
    int a[30],i,n,key,pos=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of arra:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key value");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
          printf("key found at position=%d",i+1);
          pos++;
          break;
        } 
    }
    if(pos==1)
    {
        printf("element found");
    }
    else
    {
        printf("element not found");
    }
    return 0;
}
