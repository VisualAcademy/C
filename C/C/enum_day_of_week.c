// 열거헝으로 요일을 상수화 하기
#include <stdio.h>

enum DayOfWeek
{
    SUNDAY = 0, // 0으로 초기화됨
    MONDAY, // 1씩 증가
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void)
{
    printf("%d\n", SUNDAY);     // 0
    printf("%d\n", MONDAY);     // 1
    printf("%d\n", TUESDAY);    // 2
    printf("%d\n", WEDNESDAY);  // 3
    printf("%d\n", THURSDAY);   // 4
    printf("%d\n", FRIDAY);     // 5
    printf("%d\n", SATURDAY);   // 6

    return 0;
}
