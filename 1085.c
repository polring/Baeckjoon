#include <stdio.h>

int main()
{
    int x,y,w,h;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    int num[4];
    num[0]=x;
    num[1]=y;
    num[2]=w-x;
    num[3]=h-y;
    int min=10000000;
    for(int i=0;i<4;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    printf("%d",min);
}