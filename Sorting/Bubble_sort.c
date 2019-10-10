#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        {
              if(arr[i]<arr[j])
              {
                  arr[i]^=arr[j];
                  arr[j]^=arr[i];
                  arr[i]^=arr[j];
              }
        }

    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
