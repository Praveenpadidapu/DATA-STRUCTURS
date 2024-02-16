#include<stdio.h>
int main()
{
    int a[20],n,i,j,temp=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("entered array elements:\n");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
       
       
     }
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
      printf("\narray elements after sorting are\n");
      for(i=0;i<n;i++)
      {
         printf("%d\t",a[i]);
      }
}
