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
    target_tm = (struct tm*)malloc(sizeof(struct tm));
    target_tm->tm_year = current_tm->tm_year;
    target_tm->tm_mon = current_tm->tm_mon;
    target_tm->tm_mday = current_tm->tm_mday + 10; // 10�� ��
    target_time = mktime(target_tm);

    // �� �ð��� ���� ���
    double diff = difftime(target_time, current_time);

    // ��� ��� (���̴� �� ����)
    int days = (int)diff / 86400;
    printf("%d days\n", days);

    free(target_tm);
    return 0;
}
