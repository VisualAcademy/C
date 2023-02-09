#include <stdio.h>
#include <time.h>

int main(void) 
{
    struct tm time1, time2;
    time_t time1_sec, time2_sec;

    // time1 �ʱ�ȭ
    time1.tm_hour = 10;
    time1.tm_min = 30;
    time1.tm_sec = 0;
    time1_sec = mktime(&time1);

    // time2 �ʱ�ȭ
    time2.tm_hour = 12;
    time2.tm_min = 45;
    time2.tm_sec = 0;
    time2_sec = mktime(&time2);

    // �� �ð��� ���� ���
    double diff = difftime(time2_sec, time1_sec);

    // ��� ��� (���̴� �� ����)
    printf("The difference between two times is %f seconds\n", diff);

    return 0;
}
