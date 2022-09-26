#include <stdio.h>

int main()
{
    int N;
    int i;
    scanf("%d",&N);
    
    
    for(i=1;i<N;i++)
    {
        int tmp=i;
        int num=i;
        while(tmp>0)
        {
            num+=tmp%10;
            tmp/=10;                 //몫과 나머지로 숫자를 분리하는 기법

        }
        if(num==N)
        {
            printf("%d",i);
            N=0;
            break;
        }
    }
    if(N!=0)
    {
        printf("0");

    }
    return 0;

}