#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    // �Է� ���� ���ڿ��� ������ ���� ����
    char str[80];

    // ����ڿ��� ���ڿ��� �Է� ����
    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", str);

    _strupr(str);  // _strupr �Լ��� ����Ͽ� ���ڿ��� �ҹ��ڸ� �빮�ڷ� ��ȯ

    // �빮�ڷ� ��ȯ�� ���ڿ� ���
    printf("�빮�ڷ� ��ȯ�� ���ڿ�: %s\n", str);

    return 0;
}
