#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sprintf �Լ� ����

int main(void)
{
    char buffer[80]; // ���ڿ� ���� ���� �غ�

    // ���� �����ڸ� ����Ͽ� ���ڿ� ���ڿ��� ��� ���� �迭�� ����
    sprintf(buffer, "%d. Hello, %s!", 1, "World");

    printf("%s\n", buffer); // 1. Hello, World!

    return 0;
}
