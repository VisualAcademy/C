#include <stdio.h>

// �� ������ ���� ��ȯ�ϴ� �Լ��Դϴ�.
void swap(int* a, int* b)
{
    int temp = *a;  // 'a'�� ����Ű�� ���� ���� 'temp'�� �����մϴ�.
    *a = *b;  // 'b'�� ����Ű�� ���� ���� 'a'�� ����Ű�� ���� �����մϴ�.
    *b = temp;  // 'temp'�� ����� ���� 'a'�� ���� 'b'�� ����Ű�� ���� �����մϴ�.
}

int main(void)
{
    int num1 = 5, num2 = 10;
    printf("��ȯ ��: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);  // 'swap' �Լ��� ȣ���Ͽ� 'num1'�� 'num2'�� ���� ��ȯ�մϴ�.
    printf("��ȯ ��: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
