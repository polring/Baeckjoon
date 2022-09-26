#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n=1,i;
    
    while(n>0)
    {
        scanf("%d",&n);
        int *num;
        num=(int *)calloc((2*n+1),sizeof(int));
        memset(num,0,sizeof(int));
        int k=0;
        
        
        for(i=2;i<=2*n;i++)
        {
            num[i]=i;
        }
        
        for(i=2;i<=2*n;i++)
        {
            if(num[i]==0)continue;
            for(int j=2*i;j<=2*n;j+=i)
            {
                num[j]=0;
                
            }
            
            if(i>n&&i<=n*2)
            {
            if(num[i]!=0)
            k++;
            }
            

        
        }
        
        if(n>0)
        printf("%d\n",k);
        free(num);
        
    }
}