#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 10000

int main()
{
    int n;
    int k=0;
    scanf("%d",&n);
    int arr[max]; //정수를 문자열로 저장하기 위해서 sprintf사용
    char arm[max];
    for(long i=666;;i++)
    {
        sprintf(arm,"%ld",i);
        for(int j=0;j<strlen(arm)-3;j++)
        {
            if(arm[j]==6&&arm[j+1]==6&&arm[j+2]==6)
            {
                arr[++k]=i;
                break;

            }
        }
        if(k==n)
        {
            break;
        }


    }
    printf("%d",arr[n]);
}