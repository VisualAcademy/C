#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    struct tm date1, date2;
    time_t time1, time2;

    // ù ��° ��¥
    date1.tm_year = 2020 - 1900;  // year - 1900
    date1.tm_mon = 1 - 1;          // month (0-11)
    date1.tm_mday = 15;            // day of the month (1-31)
    date1.tm_hour = 0;             // hours (0-23)
    date1.tm_min = 0;             // minutes (0-59)
    date1.tm_sec = 0;             // seconds (0-59)

    // �� ��° ��¥
    date2.tm_year = 2020 - 1900;  // year - 1900
    date2.tm_mon = 2 - 1;          // month (0-11)
    date2.tm_mday = 20;            // day of the month (1-31)
    date2.tm_hour = 0;             // hours (0-23)
    date2.tm_min = 0;             // minutes (0-59)
    date2.tm_sec = 0;             // seconds (0-59)

    time1 = mktime(&date1);       // tm ����ü�� time_t Ÿ������ ��ȯ�մϴ�.
    time2 = mktime(&date2);       // tm ����ü�� time_t Ÿ������ ��ȯ�մϴ�.

    double diff = difftime(time2, time1) / (60 * 60 * 24);  // �� ��¥�� ����(time_t)�� �� ������ ����մϴ�.

    printf("The difference between two dates is %.f days\n", diff);

    return 0;
}
