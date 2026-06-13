#include <stdio.h>

int main() 
{
    int a,b,c;

    scanf("%d %d", &a, &b);

    for(c=0; c<b; c++)
    {
        a=a+b;
        printf("%d\n",a);
    }
    // Please write your code here.
    return 0;
}