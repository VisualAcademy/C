// ���� ��¥�� �ð��� ���ڿ��� ����ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now = time(NULL); // �� ������ ���� �ð��� ����
    char datetime[20]; // ���ڿ��� ��ȯ�� ��¥�� �ð��� ������ �迭

    // ��¥�� �ð��� ���ڿ��� ��ȯ
    strftime(datetime, sizeof(datetime), "%Y-%m-%d %H:%M:%S", localtime(&now));

    printf("���� ��¥ �� �ð�: %s\n", datetime); // ��ȯ�� ���ڿ��� ���

    return 0;
}
