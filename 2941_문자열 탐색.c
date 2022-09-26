#include <stdio.h>
#include <string.h>

int main() { 
  char ap[100]; 
  scanf("%s",ap);                        //scanf gets fgets 차이 공부하기
  int cnt = strlen(ap);                 // 문자열 탐색 
  int i; 
  for(i=0; i<strlen(ap); i++) 
  { 
    if(ap[i] == '=') 
    { 
      if(ap[i-1] == 'c') cnt--; 
      if(ap[i-1] == 's') cnt--; 
      if(ap[i-1] == 'z') 
     { 
        cnt--;
        if(ap[i-2] == 'd') cnt--; 
        
     } 
    } 
  if(ap[i] == '-') 
  { 
    if(ap[i-1] == 'c') cnt--; 
    if(ap[i-1] == 'd') cnt--; 
 } 
 if(ap[i] == 'j') 
 { 
   if(ap[i-1] == 'l') cnt--; 
   if(ap[i-1] == 'n') cnt--; 
    } 
  } 
printf("%d\n", cnt);
return 0;
} 