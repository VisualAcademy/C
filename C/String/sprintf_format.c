#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sprintf �Լ� ����

int main(void)
{
    char buffer[80]; // ���ڿ� ���� ���� �غ�

    // ���� �����ڸ� ����Ͽ� ���� ������ ������ Ÿ���� ��� ���� �迭�� ����
    sprintf(buffer, "%c, %d, %.2f, %e", 'A', 1234, 3.14, 123.45e-2f);

    printf("%s\n", buffer); // A, 1234, 3.14, 1.234500e+00

    return 0;
}
