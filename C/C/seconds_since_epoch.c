/*
    1970�� 1�� 1�Ϻ��� ����(������)���� ���ʰ� ��������???
*/
#include <stdio.h>
#include <time.h>

int main(void)
{
    // time_t�� ����ü ����
    time_t now;

    // �ʰ� �޾ƿ���
    time(&now);

    // �ʰ� ���
    printf("1970�� 1�� 1�Ϻ��� ������� %lld�ʰ� �귶���ϴ�.\n", (long long)now);

    return 0;
}