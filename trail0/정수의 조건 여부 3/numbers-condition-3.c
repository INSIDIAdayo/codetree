#include <stdio.h>

int main() {
     int a;

    // 입력
    scanf("%d", &a);
    
    // 출력
    if(a % 13 == 0 || a % 19 == 0)
        printf("True\n");
    else
        printf("False\n");
    // Please write your code here.
    return 0;
}