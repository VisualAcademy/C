#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello world";  // 분석 대상 문자열
    int len = strlen(str);  // 문자열의 길이
    int n = 3; // n-gram의 n 값. 여기서는 3-gram을 생성하므로 n을 3으로 설정
    int i, j;

    printf("문자열 '%s'의 %d-gram:\n", str, n);  // n-gram 출력 알림 메시지

    // i를 0부터 (문자열 길이 - n)까지 순회하며 n-gram의 시작점을 결정
    for (i = 0; i <= len - n; i++)
    {
        // j를 0부터 n-1까지 순회하며 n-gram의 각 문자를 출력
        for (j = 0; j < n; j++)
        {
            printf("%c", str[i + j]);
        }
        printf("\n");  // n-gram 하나를 모두 출력한 후 줄바꿈
    }

    return 0;
}
