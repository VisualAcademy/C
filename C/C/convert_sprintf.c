#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int integer = 123;
    float floating = 123.456;
    char str[80];

    sprintf(str, "%d", integer);
    printf("������ ���ڿ��� ��ȯ: %s\n", str);

    sprintf(str, "%.3f", floating);
    printf("�Ǽ��� ���ڿ��� ��ȯ: %s\n", str);

    return 0;
}
