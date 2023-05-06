#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 안전하지 않은 함수 경고를 무시하도록 함
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 길이 80을 가진 문자 배열을 선언합니다.
    char str[80];

    // 사용자에게 문자열을 입력받기 위한 안내 메시지를 출력합니다.
    printf("문자열을 입력하세요: ");

    // 입력된 문자열을 str 배열에 저장합니다.
    scanf("%s", str);

    // 문자열의 길이를 계산하고 출력합니다.
    printf("문자열의 길이: %lu\n", strlen(str));

    return 0;
}
