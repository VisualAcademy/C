#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) 
{
    // �Է� ���� ���ڿ��� ������ ���� ����
    char str[100];

    // ����ڿ��� ���ڿ��� �Է� ����
    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", str);  // scanf �Լ��� ����Ͽ� ���ڿ��� �Է� ����

    _strrev(str);  // _strrev �Լ��� ����Ͽ� ���ڿ� ������

    // ������ ���ڿ� ���
    printf("������ ���ڿ�: %s\n", str);

    return 0;
}
