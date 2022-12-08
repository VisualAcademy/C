// pointer_array_week.c 
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지 
#include <stdio.h>

int main(void)
{
    char* week[] = 
        { "월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일" };

    int i;

    printf("0 ~ 6 사이의 숫자를 입력하세요: ");
    scanf("%d", &i);

    printf("선택한 숫자에 해당되는 요일은 %s입니다.\n", week[i]);

    return 0;
}
