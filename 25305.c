#include <stdio.h>
#include <stdlib.h>

void insert(int arr[],int size)
{
    int i,j;
    int temp=0;
    for(i=1;i<size;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0&&arr[j]<temp;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int *num;
    num=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    insert(num,n);
    printf("%d",num[k-1]);
    free(num);
    return 0;


}