#include  <stdio.h>
#include  <math.h>
int main() {

int n, w, h, s;
    scanf("%d", &n);
    scanf("%d", &w);
    scanf("%d", &h);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s);
        if (s <= w || s <= h)  //가로와 세로에 맞는지
            printf("DA\n");
        else if (s <= sqrt((w*w)+(h*h)))  //대각선이 맞는지
            printf("DA\n");
        else 
            printf("NE\n");
    }
    return 0;
}