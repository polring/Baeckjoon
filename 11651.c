#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}coord;

int compare(const void *a,const void *b)
{
    coord A =*(coord *)a;
    coord B =*(coord *)b;

    if(A.y>B.y)
        return 1;
    else if(A.y==B.y)
    {
        if(A.x>B.x)
        {
            return 1;
        }
        else
            return -1;
    }
    return -1;
       

}


int main()
{
    int n;
    scanf("%d",&n);
    coord *num;
    num=malloc(sizeof(coord)*n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&num[i].x,&num[i].y);
    }
    qsort(num,n,sizeof(coord),compare);
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",num[i].x,num[i].y);
    }
    free(num);
    return 0;
}