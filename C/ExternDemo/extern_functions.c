#include <stdio.h>
#include "extern_functions.h"

int shared_value; // ���� ���� shared_value ����

void multiply_by_two()
{
    shared_value *= 2; // shared_value�� 2��� ����

    // shared_value�� 2��� ����� ���� ���� ���
    printf("extern_functions.c ���Ͽ��� 2��� ���� shared_value: %d\n", shared_value);
}
