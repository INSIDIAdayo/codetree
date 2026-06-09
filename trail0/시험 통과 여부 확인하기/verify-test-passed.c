#include <stdio.h>

int main() 
{
    int a;
    scanf("%d\n",&a);

    if(a>=80)
    {printf("pass\n");
    }
    else{
        printf("%d more score\n",80-a);
    }

    // Please write your code here.
    return 0;
}