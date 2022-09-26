#include <stdio.h>

int main()
{
    int n,i;
    int arr[1000001]={0};
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+1;
        if(i%2==0)
        {
            if(arr[i]>arr[i/2]+1)
            {
                arr[i]=arr[i/2]+1;
            }
        }
        if(i%3==0)
        {
            if(arr[i]>arr[i/3]+1)
            {
                arr[i]=arr[i/3]+1;
            }
        }
    }
    printf("%d",arr[n]);
    return 0;

}