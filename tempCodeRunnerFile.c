#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",1);
    }
    else
    {
        for(i=2;i<n;i++)
    {
        if(n<=3*(pow(i,2))-(3*i)+1 && n>=3*(pow(i-1,2))-(3*(i-1))+2)
        {
            printf("%d",i);
            break;
        }
    }

    }
    

}