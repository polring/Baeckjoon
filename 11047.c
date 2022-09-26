#include <stdio.h>

int main()
{
    int N,K,cnt,i=0;
    scanf("%d %d",&N,&K);
    int score[N];

    for( i=0;i<N;i++)
    {
        scanf("%d",&score[i]);
    }
    i=N-1;
    while(K>0)
    {
        if(score[i]>K)
        {
            i--;
        }
        else
        {
        K-=score[i];
        cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
    



}