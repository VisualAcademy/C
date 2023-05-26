#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 입력 받을 문자열을 저장할 변수 선언
    char str[80];

    // 사용자에게 문자열을 입력 받음
    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    _strupr(str);  // _strupr 함수를 사용하여 문자열의 소문자를 대문자로 변환

    // 대문자로 변환된 문자열 출력
    printf("대문자로 변환된 문자열: %s\n", str);

    return 0;
}
