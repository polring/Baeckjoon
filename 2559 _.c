#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,k; 
    scanf("%d %d",&n,&k);
    int *num;
    int *sum;
    num=(int *)calloc(n,sizeof(int));
    sum=(int *)calloc(n-k+1,sizeof(int));

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<;i++)
    {
      sum[i+1]=num[i+1]+num[i];  
    }  
    int max=0;
    for(int i=1;i<n;i++) 
    {
        if(max<sum[i])
        {
            max=sum[i];
        }
    } 
    printf("%d",max);
    free(num)
    free(sum)   
}