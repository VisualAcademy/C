#include <stdio.h>

// ptr_arr �迭�� ���� ����ϴ� �Լ�
void print_ptr_arr(int* ptr_arr[2])
{
    printf("ptr_arr[0] = %d\n", *ptr_arr[0]); // ù ��° �����Ͱ� ����Ű�� ���� ���
    printf("ptr_arr[1] = %d\n", *ptr_arr[1]); // �� ��° �����Ͱ� ����Ű�� ���� ���
}

int main(void)
{
    int x = 0, y = 0;
    int* ptr_arr[2]; // ������ �迭�� ����

    ptr_arr[0] = &x; // ù ��° �����Ͱ� x�� ����Ű���� ����
    ptr_arr[1] = &y; // �� ��° �����Ͱ� y�� ����Ű���� ����

    *ptr_arr[0] = 3; // ù ��° �����Ͱ� ����Ű�� ������ 3�� �Ҵ�
    *ptr_arr[1] = 5; // �� ��° �����Ͱ� ����Ű�� ������ 5�� �Ҵ�

    print_ptr_arr(ptr_arr); // ������ �迭�� ����ϴ� �Լ� ȣ��

    return 0;
}
