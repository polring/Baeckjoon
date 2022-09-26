#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
    int*num;
    int swap,temp;
    scanf("%d",&N);
    num=(int *)malloc(sizeof(int)*N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<N-1 && swap;i++)
    {
        swap=0;
        for(j=0;j<N-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
                swap=1;
            }
        }
    }
for(i=0;i<N;i++)
{
    printf("%d\n",num[i]);
}


    
}