#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t currentTime;
    struct tm* localTime;

    time(&currentTime);  // ���� �ð� ��������
    localTime = localtime(&currentTime);  // tm ����ü�� ��ȯ

    printf("���� �ð��� ��¥: %s", asctime(localTime));  // ���

    return 0;
}
