#include <stdio.h>

// Day��� �̸��� �������� ����
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
    enum Day today = MONDAY; // today ������ ������ Day�� MONDAY ���� �Ҵ�

    // today ������ MONDAY�� ������ Ȯ��
    if (today == MONDAY)
    {
        printf("������ �������Դϴ�.\n"); // ������ ���̸�, �� today�� MONDAY�̸� ���
    }

    return 0;
}
