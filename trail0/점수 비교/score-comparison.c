#include <stdio.h>

int main() 
{
    int Aa, Ab, Ba, Bb;
    scanf("%d %d\n", &Aa, &Ab);
    scanf("%d %d\n", &Ba, &Bb);

    if(Aa>Ba && Ab>Bb)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    // Please write your code here.
    return 0;
}