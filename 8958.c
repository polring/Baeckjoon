#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    int total=0;
    int j=0;
    char num[80];
    
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        total=0;
        j=0;
          scanf("%s",num);
        for(int k=0;k<strlen(num);k++)
        {
        if(num[k]=='O')
        {
         j++;
         total+=j;
        }
        if(num[k]=='X')
        {
            j=0;
        }
       
        }
         printf("%d\n",total);

    }
        return 0;
}