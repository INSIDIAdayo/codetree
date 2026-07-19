#include <stdio.h>

int main() {
    int y;

    // 입력
    scanf("%d", &y);
    
    // 출력
    if(y % 4 == 0) {
        if(y % 100 == 0) {
            if(y % 400 == 0) {
                printf("true\n");
            }
            else {
                printf("false\n");
            }
        }
        else {
            printf("true\n");
        }
    }
    else {
        printf("false\n");
    }
    // Please write your code here.
    return 0;
}