#define _CRT_SECURE_NO_WARNINGS  // Visual Studio���� ��� �޽����� �����ϵ��� �ϴ� ��ũ��
#include <stdio.h>  // ǥ�� ����� �Լ��� ����ϱ� ���� stdio.h ��� ������ ����
#include <stdlib.h>  // malloc, realloc ���� �޸� ���� �Լ��� ����ϱ� ���� stdlib.h ��� ������ ����

int main(void)
{
    int* arr = (int*)malloc(5 * sizeof(int));  // ������ ������ arr�� �����ϰ�, ���� �޸� �Ҵ��� ���� int�� ���� 5�� ũ�⸸ŭ�� �޸𸮸� �Ҵ�
    if (arr == NULL)  // �޸� �Ҵ��� ������ ���
    {
        printf("�޸� �Ҵ� ����\n");  // ���� �޽��� ���
        return 1;  // ���α׷� ����
    }

    for (int i = 0; i < 5; i++)  // arr �迭�� 0���� 8������ 2�� ����� ����
    {
        arr[i] = i * 2;
    }

    int* newArr = (int*)realloc(arr, 10 * sizeof(int));  // arr�� ũ�⸦ 10���� int ũ��� �ø��� realloc �Լ� ���
    if (newArr == NULL)  // �޸� ���Ҵ��� ������ ���
    {
        printf("�޸� ���Ҵ� ����\n");  // ���� �޽��� ���
        free(arr);  // ���� �Ҵ��� �޸� ����
        return 1;  // ���α׷� ����
    }

    arr = newArr;  // arr �����Ϳ� ���Ҵ�� �޸��� �ּ� �Ҵ�

    for (int i = 5; i < 10; i++)  // ���Ӱ� �Ҵ�� arr �迭�� ������ �κп� 10���� 18������ 2�� ����� ����
    {
        arr[i] = i * 2;
    }

    for (int i = 0; i < 10; i++)  // arr �迭�� ����� ��� ���� ���
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // �������� �Ҵ��ߴ� �޸� ����

    return 0;  // ���α׷� ���� ����
}
