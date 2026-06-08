#include <stdio.h>

int main() 
{
    int a,b,hab;
    double na;

    scanf("%d %d\n",&a,&b);
    hab = a + b;
    na = (double)hab /2;

    printf("%d %.1lf",hab,na);
    // Please write your code here.
    return 0;
}