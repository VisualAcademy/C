#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
    // �� ����
    time_t now;

    // ������� �� ���� ��ȯ
    time(&now);

    // ���� �ð� ���ڿ� ���
    printf("���� ��¥ �� �ð�: %s", ctime(&now));

    return 0;
}
