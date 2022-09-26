#include <stdio.h>

int main()
{
    int n;                 // 입력할 소수 개수
    int i,j;          //반복문 변수
    int result=0;;        //소수의 개수
    int pos;
    int p=0;
    

    scanf("%d",&n);       //소수 찾기: 1.수의 절반까지 확인해보기 ,2.루트 수까지 확인해보기
    int score[n];
    for(i=0;i<n;i++)
    {
      int k=0;
        scanf("%d",&score[i]);
        for(j=2;j<score[i];j++)
        {
          pos=(score[i]%j);
          if(pos==0)
          {
            k++;
            break;
          }
          else
          continue;
        }
        if(k==0)
        {
          result++;
        }
        
    }
    
    for(i=0;i<n;i++)
    {
      if(score[i]==1)
      {
       p++;
      }
    }
    if(p!=0)
    {
      printf("%d",result-1);
    }
    else
    printf("%d",result);

}