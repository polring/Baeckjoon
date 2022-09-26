#include <stdio.h>

int main()
{
    int N,K;
    int j=0;
    int x=0;
    scanf("%d %d",&N,&K);
    int num[N];
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            
            num[j]=i;
            j++;
            x++;

        }
    }
  if (x>=K)
  printf("%d",num[K-1]);
  else
  printf("%d",0);

  return 0;
}