// pointer_function_multi_return.c
#include <stdio.h>

// calculate �Լ� ����
// result: ��� ���� ������ �迭
// f: ����, ����, ����, �������� �� ù ��° ����
// s: ����, ����, ����, �������� �� �� ��° ����
void calculate(int* result, int f, int s)
{
    result[0] = f + s; // ���� ��� ����
    result[1] = f - s; // ���� ��� ����
    result[2] = f * s; // ���� ��� ����
    result[3] = f / s; // ������ ��� ����
}

// main �Լ� ����
int main(void)
{
    int result[4]; // ��� ���� ������ �迭
    int first_number = 10; // ù ��° ����
    int second_number = 20; // �� ��° ����
    calculate(result, first_number, second_number); // calculate �Լ� ȣ��

    // �� ���� ��� ���
    printf("first_number + second_number = %d\n", result[0]);
    printf("first_number - second_number = %d\n", result[1]);
    printf("first_number * second_number = %d\n", result[2]);
    printf("first_number / second_number = %d\n", result[3]);

    return 0;
}
