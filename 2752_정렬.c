#include  <stdio.h>


    void bubblesort(int num[3])
    {
        int tmp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(num[j]>num[j+1])
                {
                    tmp=num[j];                    //일반적으로 사용하는 swap방식 사용
                    num[j]=num[j+1];
                    num[j+1]=tmp;
                }
            }
        }
    }

    int main()
    {
        int num[3];
        for(int i=0;i<3;i++)
        {
            scanf("%d",&num[i]);
        }
        bubblesort(num);
        for(int i=0;i<3;i++)
        {
            printf("%d ",num[i]);
        }

    }
    
    
    
