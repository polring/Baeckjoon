#include  <stdio.h>

int main()
{
   unsigned long long result;
    int M,N;
   unsigned long long num[100];
    num[1]=1;

    for(int i=2;i<=100;i++)
    {
        num[i]=num[i-1]*i;
    }
    
    scanf("%d %d",&N,&M);
    result=num[N]/(num[N-M]*num[M]);
    printf("%llu",result);
return 0;
}






    
