#define _CRT_SECURE_NO_WARNINGS  // ���� ��� ���� ���� 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    int* ptr;

    printf("�迭 ũ�� �Է�: ");  // ���� �迭 ũ�� �Է� ��û
    scanf("%d", &n);

    // ���� �迭 �Ҵ�
    ptr = (int*)malloc(n * sizeof(int));  // ũ�� n�� ���� �޸� �Ҵ�
    if (ptr == NULL)  // �޸� �Ҵ� ���� �˻�
    {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        *(ptr + i) = i;  // �迭�� �� �Ҵ�
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));  // �迭 �� ���
    }
    printf("\n");

    // �޸� ����
    free(ptr); 

    return 0;
}
