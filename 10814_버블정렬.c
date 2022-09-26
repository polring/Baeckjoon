#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int age;
    char name[100];
}member;


int main()
{
    int n;
    int i,j;
    int temp;
    char am[100];
    scanf("%d",&n);
    member *num;
    num=malloc(sizeof(member)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d %s",&num[i].age,num[i].name);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(num[j].age>num[j+1].age)
            {                                             //버블 정렬을 사용하였기 때문에 효율이 좋지 않다.속도가 느리다.O(n^2)
                temp=num[j].age;                          //심지어 반복문 내부에서 함수를 사용하였기 때문에 속도가 더 느려졌다.
                num[j].age=num[j+1].age;
                num[j+1].age=temp;
                strcpy(am,num[j].name);                  //버블 정렬을 퀵 정렬로 수정하면 효율을 높일 수 있다.
                strcpy(num[j].name,num[j+1].name);
                strcpy(num[j+1].name,am);
                
                

            }
            
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d %s ",num[i].age,num[i].name);
    }
    free(num);
    return 0;
}