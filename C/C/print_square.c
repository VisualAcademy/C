#include <stdio.h>

// ������ �Ű� ������ �޾Ƽ� ���� ���� ����ϴ� �Լ�
void print_square(int number)
{
    printf("%d�� ������ %d�Դϴ�.\n", number, number * number);
}

int main(void)
{
    print_square(5); // print_square �Լ��� ���� 5�� ����
    print_square(7); // print_square �Լ��� ���� 7�� ����

    return 0;
}
