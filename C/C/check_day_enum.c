#include <stdio.h>

// Day라는 이름의 열거형을 정의
enum Day
{
    MONDAY,    // 0
    TUESDAY,   // 1
    WEDNESDAY, // 2
    THURSDAY,  // 3
    FRIDAY,    // 4
    SATURDAY,  // 5
    SUNDAY     // 6
};

int main(void)
{
    enum Day today = MONDAY; // today 변수에 열거형 Day의 MONDAY 값을 할당

    // today 변수가 MONDAY와 같은지 확인
    if (today == MONDAY)
    {
        printf("오늘은 월요일입니다.\n"); // 조건이 참이면, 즉 today가 MONDAY이면 출력
    }

    return 0;
}
