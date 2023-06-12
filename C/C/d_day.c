#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t current_time;
    time_t target_time;
    struct tm* current_tm;
    struct tm* target_tm;

    // ���� �ð�
    time(&current_time);
    current_tm = localtime(&current_time);

    // ��� �ð�
    target_time = current_time + 10 * 24 * 60 * 60;  // 10�� ��
    target_tm = localtime(&target_time);

    // �� �ð��� ���� ���
    double diff = difftime(target_time, current_time);

    // ��� ��� (���̴� �� ����)
    int days = (int)(diff / 86400);
    printf("%d days\n", days);

    return 0;
}
