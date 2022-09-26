#include <stdio.h>
#include <math.h>
int main()
{
    long long score[3];  
    long long max=0;
    int n;
    long long temp;
    
   
    while(score[0]!=0 || score[1]!=0 || score[2]!=0)
    {
    max=0;
    scanf("%lld %lld %lld",&score[0],&score[1],&score[2]);
    for(int i=0;i<3;i++)
    {
        if(max<score[i])
        {
            max=score[i];
            n=i;
        }
    }
    if(n!=0)
    {
    temp=score[0];
    score[0]=score[n];
    score[n]=temp;
    }

    if(score[0]==0&&score[1]==0&&score[2]==0)
        break;
    else if(pow(score[0],2)==pow(score[1],2)+pow(score[2],2))
    {
        printf("right\n");
    }
    else
        printf("wrong\n");
    }

    return 0;
   
}