#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int arithmetic_mean; // 산술평균 
    int median; // 중앙값
    int mode; //최빈값
    int range; //범위


    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=num[i];
    }
    arithmetic_mean = (int)(total + 0.5);

    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
        }
    }
    median = num[n/2];
    range = num[n-1] - num[0];
    

    
    

    

}