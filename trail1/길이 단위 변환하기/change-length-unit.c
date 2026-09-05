#include <stdio.h>

int main() {
    // 변수 선언
    double a = 9.2;
    double b = 1.3;
    
    // 출력
    printf("%.1lfft = %.1lfcm\n%.1lfmi = %.1lfcm\n", a, a*30.48, b, b*160934);
    return 0;
}