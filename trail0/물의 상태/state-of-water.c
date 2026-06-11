#include <stdio.h>

int main() 
{
    int a;
    scanf("%d\n",&a);

    if(a<0)
    {
        printf("ice\n");
    }

    else if(a>=100)
    {
        printf("vapor\n");
    }

    else
    {
        printf("water\n");
    }
    // Please write your code here.
    return 0;
}