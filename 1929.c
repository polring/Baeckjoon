#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void search(int *score,int n,int m);
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    int *score;
    score=(int *)calloc(n+1,sizeof(int));
    memset(score,0,sizeof(int));
    for(i=2;i<=n;i++)
    {
        score[i]=i;
    }
    for(i=2;i<=n;i++)
    {
        if(score[i]==0)continue;

        for(int j=i*2;j<=n;j+=i)
        {
            score[j]=0;
        }
    }
    for(i=m;i<=n;i++)
    {
        if(score[i]!=0)
        {
            printf("%d\n",score[i]);
        }
    }
}



