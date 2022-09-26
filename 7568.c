#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  typedef struct{
        int weight;
        int height;
    }psi;




int main()
{
    int N;
    scanf("%d",&N);
    int k=0;
    psi *num;
    int *arr;
    arr=(int *)malloc(sizeof(int)*N);
    num=(psi *)malloc(sizeof(psi)*N);       //num 배열 동적 할당 (*num).wegiht==num->weight num[i]==*(num+i)
    for(int i=0;i<N;i++)
    {
        scanf("%d %d",&num[i].weight,&num[i].height);
    }
    for(int i=0;i<N;i++)
    {
        k=0;
        for(int j=0;j<N;j++)
        {
            
            if(num[i].weight<num[j].weight&&num[i].height<num[j].height)
            {
                k++;
            }
        }
        arr[i]=k+1;
        
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    free(num);
    free(arr);
    return 0;   
}
