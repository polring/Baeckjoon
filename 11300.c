#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *num;
    int *arr;
    num=(int*)malloc(sizeof(int)*n);
    arr=(int*)malloc(sizeof(int)*n);
    int i,j;
    int temp=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(num[j]<num[j-1])
            {
                temp=num[j];
                num[j]=num[j-1];
                num[j-1]=temp;
            }
        }
    }
    arr[0]=num[0];
    int total=arr[0];
    for(i=1;i<n;i++)
    {
         arr[i]=arr[i-1]+num[i];
         total+=arr[i];

    }
    printf("%d",total);
    free(num);
    free(arr);

   
    
}