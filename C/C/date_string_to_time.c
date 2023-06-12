#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

int main(void) 
{
    char date_str[] = "2023-10-20 12:30:15";
    struct tm tm;

    // sscanf�� ����Ͽ� ���ڿ��� tm ����ü�� ��ȯ
    sscanf(date_str, "%4d-%2d-%2d %2d:%2d:%2d",
        &tm.tm_year, &tm.tm_mon, &tm.tm_mday,
        &tm.tm_hour, &tm.tm_min, &tm.tm_sec);

    // sscanf�� �⵵�� 1900���� ����ϰ�, ���� 0���� �����Ͽ� ����ϱ� ������ ������ �ʿ��մϴ�.
    tm.tm_year -= 1900;
    tm.tm_mon -= 1;

    // tm ����ü�� time_t Ÿ������ ��ȯ
    time_t time = mktime(&tm);

    printf("��¥ ���ڿ�: %s\n", date_str);
    printf("�ð� ����: %s", ctime(&time));

    return 0;
}
