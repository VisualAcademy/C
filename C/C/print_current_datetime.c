#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> // ��¥ �� �ð� ������ ���� time ���̺귯���� ����

int main(void)
{
    // ���� �ð��� ������
    time_t t = time(NULL);

    // time_t ���� ���� �ð����� ��ȯ
    struct tm tm = *localtime(&t);

    // ���� ��¥ �� �ð��� ���
    printf("���� ��¥�� �ð�: %04d-%02d-%02d %02d:%02d:%02d\n",
        tm.tm_year + 1900, // tm_year�� 1900�� ���� (1900�� ���� ��� �⵵�̹Ƿ�)
        tm.tm_mon + 1, // tm_mon�� 1�� ���� (1���� 0���� �����ϹǷ�)
        tm.tm_mday, // ���� ���� (1-31)
        tm.tm_hour, // ���� ���� �ð� (0-23)
        tm.tm_min, // �ð� ���� �� (0-59)
        tm.tm_sec); // �� ���� �� (0-60)

    return 0;
}
