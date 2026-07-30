#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int a, b;
    int sum = 0;

    scanf("%d %d", &a, &b);

    // a부터 b까지의 수 중 짝수인 수들을 더합니다.
    for(int i = a; i <= b; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }

    // 출력
    printf("%d\n", sum);

    return 0;
}