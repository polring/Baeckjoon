#include <stdio.h>
#define max 10001


int main()
{
    int n,i,j;
    int num;
    scanf("%d",&n);
    int arr[max];
    for(i=2;i<=max;i++)
    {
        arr[i]=i;
    }
    for(i=2;i<=max;i++)
    {
        if(arr[i]==0)continue;
        for(j=2*i;j<=max;j+=i)
        {
            arr[j]=0;
        }
    }
    
    
    for(i=0;i<n;i++)
    {
        int u=0;
        int a1,a2;
        scanf("%d",&num);
        for(j=2;j<num;j++)
        {
            for(int k=j+1;k<num;k++)
            {
            if(arr[j]>0&&arr[k]>0)
            {
            if(num==arr[j]+arr[k])
            {
                a1=j;
                a2=k;
                
            }
            }
            }
            if(u>0)
            break;
            
        }
        printf("%d %d\n",a1,a2);


    }
    
    

}