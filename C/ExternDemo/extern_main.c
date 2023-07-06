#include <stdio.h>
#include "extern_functions.h"

extern int shared_value; // extern_functions.c�� ���ǵ� shared_value ������ �ܺ� ������ ����

int main(void)
{
    shared_value = 5; // shared_value ���� 5�� ����
    printf("extern_main.c ���Ͽ��� ������ shared_value: %d\n", shared_value); // ���� shared_value ���� ���

    multiply_by_two(); // extern_functions.c�� ���ǵ� multiply_by_two �Լ� ȣ��. �� �Լ��� shared_value�� 2��� ����.

    return 0;
}
