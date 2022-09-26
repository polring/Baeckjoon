#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char **num;
    num=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        num[i]=(char *)malloc(m*sizeof(char));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%c",&num[i][j]);             //인접 행렬로 그래프 표현
        }

    }
    void bfs()
    {
        
    }


}