#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sprintf �Լ� ����
#include <stdlib.h> // malloc, free �Լ� ����

int main(void)
{
    char* buffer = malloc(sizeof(char) * 80); // ���� �޸� �Ҵ����� 80�� ���� 

    sprintf(buffer, "%c, %d, %f", 'A', 1234, 3.14);

    printf("%s\n", buffer); // A, 1234, 3.140000

    free(buffer); // ���� �޸� ����

    return 0;
}
