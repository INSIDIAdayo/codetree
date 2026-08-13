#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
    
    // 숫자로 이루어진 삼각형을 출력합니다.
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}
