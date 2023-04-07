#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> //gmtime()

int main(void)
{
    //�� ����
    time_t now;

    //�ð� ����ü
    struct tm* t; // ������ ������ ����

    //�� ��ȯ
    time(&now);

    //���� ǥ�� �ð� ��ȯ : localtime() -> gmtime()
    t = gmtime(&now); // �� �̻� �������� �ʿ����� ����

    //���� ǥ�� �ð� ���
    printf("���� ǥ�ؽ� : %4d.%d.%d %d:%d:%d \n"
        , t->tm_year + 1900 // ������ ������ ����ϹǷ� "->" ������ ���
        , t->tm_mon + 1
        , t->tm_mday
        , t->tm_hour
        , t->tm_min
        , t->tm_sec
    );

    return 0;
}
