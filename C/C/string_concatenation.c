#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str1[50], str2[50];
    int i, j, len1 = 0;

    // 첫 번째 문자열 입력 받기
    printf("첫 번째 문자열을 입력하세요: ");
    scanf("%s", str1);

    // 두 번째 문자열 입력 받기
    printf("두 번째 문자열을 입력하세요: ");
    scanf("%s", str2);

    // 첫 번째 문자열의 길이를 계산 (연결할 위치를 찾기 위함)
    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }

    // 두 번째 문자열을 첫 번째 문자열의 끝에 연결
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[len1 + j] = str2[j];
    }

    // 문자열 연결 후 NULL 문자를 추가하여 문자열의 끝을 표시
    str1[len1 + j] = '\0';

    // 결과 출력
    printf("결과: %s\n", str1);

    return 0;
}
