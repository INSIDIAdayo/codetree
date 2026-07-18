#include <stdio.h>

int main() {
    int n;

    	// 입력
        	scanf("%d", &n);
                
                    // 출력
                    	if((n % 2 == 1 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0))
                        		printf("true\n");
                                	else
                                    		printf("false\n");
    // Please write your code here.
    return 0;
}