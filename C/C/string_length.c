#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� �������� ���� �Լ� ��� �����ϵ��� ��
#include <stdio.h>
#include <string.h>

int main(void)
{
    // ���� 80�� ���� ���� �迭�� �����մϴ�.
    char str[80];

    // ����ڿ��� ���ڿ��� �Է¹ޱ� ���� �ȳ� �޽����� ����մϴ�.
    printf("���ڿ��� �Է��ϼ���: ");

    // �Էµ� ���ڿ��� str �迭�� �����մϴ�.
    scanf("%s", str);

    // ���ڿ��� ���̸� ����ϰ� ����մϴ�.
    printf("���ڿ��� ����: %lu\n", strlen(str));

    return 0;
}
