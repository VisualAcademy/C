#include <stdio.h>

int main()
{
    char code[5];

    code[0] = 'C'; // ���� �ϳ��� �Է�
    code[1] = 'o';
    code[2] = 'd';
    code[3] = 'e';
    code[4] = '\0'; // ���ڿ��� ���� ��Ÿ���� NULL ���� ����

    printf("%s\n", code);

    return 0;
}
