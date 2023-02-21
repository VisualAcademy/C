#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const char* week[] = { "월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일" };

    int i;

    printf("숫자를 입력하세요.(0~6) : ");
    scanf("%d", &i);

    printf("선택한 숫자에 해당되는 요일은 %s입니다.\n", week[i]);

    return 0;
}
