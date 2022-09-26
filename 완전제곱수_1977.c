#include <stdio.h>
#include <math.h>

int main()
{
    int M,N;
    int total=0;
    scanf("%d",&M);
    scanf("%d",&N);

    

    for(int i=M;i<=N;i++)
    {
        for(int j=1;j<=sqrt(N);j++)
        {
          if(i==j*j)
          {
              total+=i;
          }
          
          
        }
    }
    printf("%d\n",total);

     for(int i=M;i<=N;i++)
    {
        for(int j=1;j<sqrt(N);j++)
        {
          if(i==j*j)
          {
              printf("%d",i);
              i=N;
              break;
          }
          
        }
    }
    return 0;
}