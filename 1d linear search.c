#include <stdio.h>

int main()
{
    int a[30],i,j,n,key,temp;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of arra:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("enter the elements after sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        
    }
}
