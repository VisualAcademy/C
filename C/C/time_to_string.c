#define _CRT_SECURE_NO_WARNINGS 
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    time_t current_time;  // time_t Ÿ���� ���� �ð� ���� ����
    char* c_time_string;  // ���ڿ� ������ �ð� ���� ����

    current_time = time(NULL);  // ���� �ð� ��������
    c_time_string = ctime(&current_time);  // ���� �ð��� ���ڿ��� ��ȯ

    // ctime() �Լ��� �̹� �� �ٲ� ���ڸ� �߰������Ƿ�, �� �ٲ� ���ڸ� �߰����� �ʾƵ� �˴ϴ�.
    printf("%s", c_time_string);  // ���

    return 0;
}
