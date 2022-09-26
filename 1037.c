#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    int k=0,t=0,count=0;          //진짜 약수의 개수가 n개이면 약수의 개수는 n+2이다
    scanf("%d",&n);
    int *num;
    num=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",num+i);
    }
    //무작정 코딩하지 말고 논리적으로 말이 되는지를 생각해보자!!!!!!!!!
    //약수중 가장 작은 값과 가장 큰값의 곱이 원래 수이다.
    //내부 정렬을 통해 최대 최소를 찾아도 되고 직접 최대 최소를 구해도 된다.
    int min = num[0];
    int max = num[0];
    for(i=1;i<n;i++)
    {
        
        
        if(min>num[i])
        min = num[i];
        if(max<num[i])
        max = num[i];
        
    }
    int answer = min * max;
    printf("%d",answer);
    return 0;

}



