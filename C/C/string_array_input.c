#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
#define ARR_SIZE 3

    // ������ �迭 ����
    char* a[ARR_SIZE];

    // ���� �޸� �Ҵ�
    for (int i = 0; i < ARR_SIZE; i++)
    {
        a[i] = (char*)malloc(100 * sizeof(char));
    }

    // ����� �Է� �ޱ�
    for (int i = 0; i < ARR_SIZE; i++)
    {
        scanf("%s", a[i]);
    }

    // �迭 ���� ���
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%s\n", a[i]);
    }

    // ���� �޸� ����
    for (int i = 0; i < ARR_SIZE; i++) {
        free(a[i]);
    }

    return 0;
}