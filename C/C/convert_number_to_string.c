#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int num = 123;
    char str[80];

    sprintf(str, "%d", num);
    printf("���ڸ� ���ڿ��� ��ȯ: %s\n", str);

    return 0;
}
