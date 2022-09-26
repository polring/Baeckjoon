#include <stdio.h>
#include <stdlib.h>
#define stack_size 100000

char result[2*stack_size];
int stack[stack_size];
int top=-1;

int main()
{
    int n;
    int i,j;
    int *arr;
    int index=0;
    int result_index=0;
    int num=1;
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    while(1)
    {
        if(top==-1 || stack[top]<arr[index])
        {
            stack[++top]=num++;
            result[result_index++]='+';
        }
        else if(stack[top]==arr[index])
        {
            top--;
            result[result_index++]='-';
            index++;
        }
        else
        {
            printf("No\n");
            return 0;
        }
        if(result_index==n*2)
        break;

    }
    for(j=0;j<result_index;i++)
    {
        printf("%c\n",result[i]);
    }
    return 0;


}