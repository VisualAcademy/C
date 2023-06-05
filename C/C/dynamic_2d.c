#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows, cols;
    printf("������ ���� �Է��ϼ���: ");
    scanf("%d", &rows);
    printf("������ ���� �Է��ϼ���: ");
    scanf("%d", &cols);

    // int�� ���� �����Ϳ� ������ ����ŭ �޸𸮸� �Ҵ��մϴ�.
    int** array = (int**)malloc(rows * sizeof(int*));

    // �� ���ο� ���Ͽ� ������ ����ŭ �޸𸮸� �Ҵ��մϴ�.
    for (int i = 0; i < rows; i++)
    {
        array[i] = (int*)malloc(cols * sizeof(int));
    }

    int value = 1; // �ڵ����� �����ϴ� ���ڰ��� ���� ����
    // 2���� �迭�� ���Ҵ� �ڵ����� �����ϴ� ���ڰ����� �����˴ϴ�.
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = value++; // ���ڰ��� �迭�� �Ҵ��ϰ�, value�� 1 ����
        }
    }

    // 2���� �迭 ���
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // ���� �Ҵ�� �޸𸮸� �����մϴ�.
    for (int i = 0; i < rows; i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}
