#include <stdio.h>

int main()
{
    int i;
    int T;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        int k,n;
        scanf("%d %d",&k,&n);
        int result[k+1][14];
        for(int j=0;j<14;j++)
        {
            result[0][j]=j+1;
        }
        for(int j=0;j<k+1;j++)
        {
            result[j][0]=1;
        }
        for(int u=1;u<=k;u++)
        {
            for(int j=1;j<14;j++)
            {
                result[u][j]=result[u-1][j]+result[u][j-1];
            }
        }
        printf("%d\n",result[k][n-1]);     
    }
}
