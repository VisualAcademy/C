#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define SIZE 3 // �迭�� ũ�⸦ 3���� ����

int main(void)
{
    int arr[SIZE], max, min; // ũ�Ⱑ SIZE�� ���� �迭�� �ִ�, �ּڰ��� ������ ���� ����
    printf("3���� ������ �Է��ϼ���:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]); // ����ڷκ��� SIZE ���� ������ �Է¹���
    }
    max = min = arr[0]; // �ִ񰪰� �ּڰ��� �迭�� ù ��° ���ҷ� �ʱ�ȭ
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > max) // ���� ���Ұ� �ִ񰪺��� ũ�ٸ�
        {
            max = arr[i]; // �ִ��� ���� ���ҷ� ����
        }
        if (arr[i] < min) // ���� ���Ұ� �ּڰ����� �۴ٸ�
        {
            min = arr[i]; // �ּڰ��� ���� ���ҷ� ����
        }
    }
    printf("�ִ�: %d, �ּڰ�: %d\n", max, min);
    return 0;
}
