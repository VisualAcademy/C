#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sprintf �Լ� ����

int main(void)
{
    char buffer[80]; // ���ڿ� ���� ���� �غ�

    // ���� �����ڸ� ����Ͽ� ���� ������ ������ Ÿ���� ��� ���� �迭�� ����
    sprintf(buffer, "%c, %d, %.2f", 'A', 1234, 3.14);

    printf("%s\n", buffer); // A, 1234, 3.14

    return 0;
}
