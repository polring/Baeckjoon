#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int age;
    char name[101];
}member;


int compare(const void *a,const void *b)
{
    member A=*(member*)a;
    member B=*(member*)b;
    if(A.age>B.age)
    {
        return 1;
    }
    else if(A.age==B.age)
        return 0;

    
    return -1;
    
}








int main()
{
    int n;
    int i,j;
    int temp;
    char am[101];
    scanf("%d",&n);
    member *num;
    num=malloc(sizeof(member)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d %s",&num[i].age,num[i].name);
    }
    qsort(num,n,sizeof(member),compare);
    for(i=0;i<n;i++)
    {
        printf("%d %s ",num[i].age,num[i].name);
    }
    free(num);
    return 0;




}