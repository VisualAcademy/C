// ���������� ������ ���ȭ �ϱ�
#include <stdio.h>

enum DayOfWeek
{
    SUNDAY = 0, // 0���� �ʱ�ȭ��
    MONDAY, // 1�� ����
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
