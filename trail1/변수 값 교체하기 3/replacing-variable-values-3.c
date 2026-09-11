#include <stdio.h>

int main() {
    // 변수 선언
        int a = 3, b = 5;
            
                // 교체
                    int temp = a;
                        a = b;
                            b = temp;
                                
                                    // 출력
                                        printf("%d\n%d\n", a, b);
                                            return 0;
                                            }