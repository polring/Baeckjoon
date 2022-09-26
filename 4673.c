#include <stdio.h>

int sum(int n);

int main()
{
    int arr[10001],i,check;
    {
        for(i=0;i<=10000;i++)
        {
            check=sum(i);
            if(check<=10000)
            {
                arr[check]=1;      
            }
        }
        for(i=0;i<10001;i++)
        {
            if(arr[i]!=1)
            printf("%d\n",i);
        }
    }

}


int sum(int n)
{
    int sum=n;
    while(n>0)
    {
        sum+=n%10;              //각 자리수를 더하는 알고리즘
        n=n/10;

    }
    return sum;
}