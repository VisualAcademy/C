#include <stdio.h>

int main(void)
{
    char buffer[80];

    printf("������ �Է��ϼ���: ");
    fgets(buffer, 80, stdin);

    puts("�Է��Ͻ� ���ڿ���: ");
    puts(buffer);

    return 0;
}
