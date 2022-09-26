#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int result=1;
    if(N>0)
    {
    for(int i=1;i<=N;i++)
    {
       result*=i;
    }
    printf("%d",result);
    }
    else
    printf("%d",1);
    return 0;

}