#include <stdio.h>
#include <string.h>

int main()
{
    char score[1000000];

    int i;
    int k=0;
    fgets(score,10000000,stdin);
    int num=strlen(score);
    for(i=0;i<num;i++)                     //scanf는 띄어쓰기 입력x fgets,gets는 띄어쓰기 입력(개행문자 입력) 버퍼 개념;
    {
        if(score[i]==' ')
        {
            k+=1;
        }
    }
    if(score[0]==' ')
    {
        k=k-1;
    }
    if(score[num-2]==' ')
    {
        k=k-1;
    }
    
    printf("%d",k+1);
    return 0;
}