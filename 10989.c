#include <stdio.h>
#define max 10001
int main()
{
    int n,i,j,temp;
    int arr[max]={0,};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        arr[temp]++;
    }
    for(i=0;i<max;i++)
    {
        for(j=0;j<arr[i];j++)
        {
            printf("%d\n",i);
        }
    }
    return 0;

}