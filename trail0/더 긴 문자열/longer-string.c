#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열을 구현합니다.
    char str1[21];
    char str2[21];
    
    // 문자열을 입력받습니다.
    scanf("%s", str1);
    scanf("%s", str2);
    
    // 문자열의 길이를 구합니다.
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // 더 긴 문자열과 그 문자열의 길이를 출력합니다. 같을 경우 same을 출력합니다.
    if(len1 > len2)
        printf("%s %d\n", str1, len1);
    else if(len1 < len2)
        printf("%s %d\n", str2, len2);
    else
        printf("same\n");

    return 0;
}