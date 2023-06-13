#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "hello world";  // 문자열 선언
    int len = strlen(str);  // 문자열의 길이 계산
    int i;

    printf("문자열 '%s'의 2-gram:\n", str);  // 2-gram 출력 알림 메시지
    for (i = 0; i < len - 1; i++)
    {
        // 2-gram 출력. 현재 문자와 다음 문자를 함께 출력
        printf("%c%c\n", str[i], str[i + 1]);
    }

    return 0;
}
