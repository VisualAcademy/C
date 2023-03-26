#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 50 // 문자열 길이를 상수로 정의

// 입력된 문자열이 숫자로만 구성되어 있는지 검사하는 함수
bool is_valid_number(const char* str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
        {
            return false; // 숫자가 아닌 문자가 있을 경우 false 반환
        }
        str++;
    }
    return true; // 모든 문자가 숫자일 경우 true 반환
}

int main(void)
{
    int len;
    int i;

    char buffer[BUFFER_SIZE]; // 문자열을 저장할 버퍼
    char* digits; // 문자열 포인터

    printf("변환시킬 숫자를 입력하세요... => ");
    scanf("%s", buffer); // 사용자로부터 문자열 입력 받음

    // 입력된 문자열이 유효한 숫자인지 검사
    if (!is_valid_number(buffer))
    {
        printf("유효한 숫자가 아닙니다.\n");
        return 1; // 유효하지 않은 경우 프로그램 종료
    }

    len = strlen(buffer); // 문자열 길이 계산
    digits = buffer; // 포인터에 버퍼 주소 할당

    printf("변환 결과 : ");

    // 문자열을 역순으로 출력하며 천 단위마다 콤마를 추가
    for (i = len; i > 0;)
    {
        printf("%c", *digits++);
        i--;
        if (i > 0 && (i % 3) == 0)
        {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
