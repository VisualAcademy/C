#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� ���ϱ� ���� ��ũ�� ����
#include <stdio.h> // ǥ�� ����� �Լ��� ���� ��� ���� ����
#include <string.h> // ���ڿ� ó�� �Լ��� ���� ��� ���� ����

int main(void)
{
    char src[100], dest[100]; // ���� ���ڿ��� ������ ���ڿ��� ������ char�� �迭 ����

    printf("���� ���ڿ��� �Է��ϼ���: "); // ����ڿ��� ���� ���ڿ� �Է� ��û ���
    fgets(src, sizeof(src), stdin); // ǥ�� �Է��� ���� ����ڷκ��� ���ڿ� �޾ƿ���

    strcpy(dest, src); // src�� ���ڿ��� dest�� ����

    printf("����� ���ڿ�: %s", dest); // ����� ���ڿ� ���
    return 0;
}
