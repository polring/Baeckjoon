#include <stdio.h>

void bubblesort(int dataset[],int length)
{
    int i=0;
    int j=0;
    int temp=0;
    for(i=0;i<length-1;i++)
    {
        for(j=0;j<length-(i+1);j++)
        {
            if(dataset[j]>dataset[j+1])
            {
                temp=dataset[j+1];
                dataset[j+1]=dataset[j];
                dataset[j]=temp;
            }
        }
    }
}
int main()
{
    int length;
    scanf("%d",&length);
    int dataset[length];
    for(int k=0;k<length;k++)
    {
        scanf("%d",&dataset[k]);
    }


    
    int i=0;
    
    bubblesort(dataset,length);
    for(i=0;i<length;i++)
    {
        printf("%d\n",dataset[i]);
    }

    printf("\n");
    return 0;
}