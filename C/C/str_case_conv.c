#define _CRT_SECURE_NO_WARNINGS // scanf 함수에서 보안 경고를 무시하기 위한 전처리기 지시문

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100]; // 입력받을 문자열을 저장할 배열 선언
    int i;

    printf("문자열을 입력하세요: ");
    scanf("%99[^\n]", str); // 개행 문자('\n') 이전까지 최대 99개의 문자를 입력 받음

    for (i = 0; str[i]; i++)
    {
        if (isupper(str[i])) // 대문자인 경우
        {
            str[i] = str[i] + 32; // 대문자를 소문자로 변경
        }
        else if (islower(str[i])) // 소문자인 경우
        {
            str[i] = str[i] - 32; // 소문자를 대문자로 변경
        }
    }

    printf("대소문자 변환된 문자열: %s\n", str); // 변환된 문자열 출력

    return 0;
}
