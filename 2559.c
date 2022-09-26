#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,k; 
    scanf("%d %d",&n,&k);
    int *num;
    int *sum;
    num=(int *)calloc(n+1,sizeof(int));
    sum=(int *)calloc(n-k+2,sizeof(int));
    num[0]=0
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=1;i<=n-k+1;i++)
    {
      num[i]=num[i+1]+num[i];  
    }
     
     
}