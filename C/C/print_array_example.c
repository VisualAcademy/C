#include <stdio.h>

// �迭�� ���ڷ� �޾� ���Ҹ� ����ϴ� �Լ�
void print_array(int* array, int size) // int�� ������ array�� ���� ���� size�� ���ڷ� ����
{
    for (int i = 0; i < size; i++)  // size ��ŭ �ݺ��Ͽ�
    {
        printf("%d ", array[i]);  // array�� �� ���Ҹ� ���
    }
    printf("\n");  // �ٹٲ�
}

int main(void)
{
    int array[] = { 1, 2, 3, 4, 5 };  // int�� �迭 ����� �ʱ�ȭ
    int size = sizeof(array) / sizeof(int);  // �迭�� ũ�� ���

    print_array(array, size);  // print_array �Լ� ȣ��. �迭�� �迭�� ũ�⸦ ���ڷ� ����

    return 0;
}
