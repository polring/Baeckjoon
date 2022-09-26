#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,j=2;
    scanf("%d",&n);


   
    while(1)
    {
        if(n<=i && n>=i-j+2)
        {
            break;
        }
        i=i+j;
        j++;
    }
    
    if(j%2!=0)
    {
        printf("%d/%d",n-i+j-1,i-n+1);
    }
    else
    {
        printf("%d/%d",i-n+1,n-i+j-1);
    }
    
    return 0;



}