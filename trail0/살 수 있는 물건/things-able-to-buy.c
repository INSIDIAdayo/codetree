#include <stdio.h>

int main() 
{
    int a;

    scanf("%d\n",&a);

    if(a>=3000)
    {
        printf("book\n");
    }

    else if(a>=1000)
    {
        printf("mask\n");
    }

    else
    {
        printf("no\n");
    }
    // Please write your code here.
    return 0;
}