#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", str);

    _strlwr(str);
    printf("�ҹ��ڷ� ��ȯ�� ���ڿ�: %s\n", str);

    return 0;
}
