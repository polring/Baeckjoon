#include <stdio.h>

int main()
{
    int n;
    int k=0;
    scanf("%d",&n);
if(n<=1)
printf("%d",0);

else
{
    while(n>1)
    {
    if(n%3==0)
    {
        k++;
        n/=3;
        continue;
    }
    if(n%2==0)
    {
        k++;
        n/=2;
        continue;
    }
    if(n%2!=0&&n%3!=0)
    {
        k++;
        n--;
        continue;
    }
    }
    printf("%d",k);
}
    return 0;
}