#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t currentTime;
    struct tm* localTime;

    time(&currentTime);  // ���� �ð��� time_t Ÿ������ �����ɴϴ�.
    localTime = localtime(&currentTime);  // time_t Ÿ���� tm ����ü�� ��ȯ�մϴ�.

    printf("Current time and date: %s", asctime(localTime));  // tm ����ü�� ASCII ������ ���ڿ��� ��ȯ�Ͽ� ����մϴ�.

    return 0;
}
