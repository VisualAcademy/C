#include <stdio.h>

int main(void)
{
    char str[100];

    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, 100, stdin);

    printf("�Էµ� ���ڿ�: %s\n", str);

    return 0;
}
