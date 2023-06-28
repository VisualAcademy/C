#include <stdio.h>

// Season 열거형 정의 (SPRING=0, SUMMER=1, AUTUMN=2, WINTER=3)
enum Season
{
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

int main(void)
{
    enum Season season = SPRING; // season 변수를 SPRING 값으로 초기화

    // season 변수의 크기를 바이트 단위로 출력
    printf("열거형 크기: %zu 바이트\n", sizeof(season));

    return 0;
}
