#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    char **score;
    score=(char**)malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++)
    {
        score[i]=(char*)malloc(sizeof(char)*m);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%c",&score[i][j]);
        }

    }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf(" %c",score[i][j]);
       }
   }
   


    
   











    for(int i=0; i<n; i++)
    {
    free(score[i]);
    }
    free(score);


}