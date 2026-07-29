#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
    int cnt = 1;
    
    // 숫자로 이루어진 삼각형을 출력합니다.
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
    
    return 0;
}