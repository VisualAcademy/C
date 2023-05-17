#include <stdio.h>
#include <stdlib.h>

/**
 * @brief �� �Լ�
 *
 * �� �Լ��� �� ������ ���Ͽ� ù ��° ������ ������ ����, ������ 0, ũ�� ����� ��ȯ�մϴ�.
 * �� �Լ��� qsort �Լ��� ���� ȣ��Ǿ� �迭�� ���� ������ �����մϴ�.
 *
 * @param a ���� ù ��° ������ ������
 * @param b ���� �� ��° ������ ������
 * @return ù ��° ���ڿ� �� ��° ������ ���̰�
 */
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

/**
 * @brief ���α׷��� ���� �Լ�
 *
 * �� �Լ������� ���� �迭�� �����ϰ� qsort �Լ��� ȣ���Ͽ� �迭�� �����մϴ�.
 * �� ��, ���ĵ� �迭�� ����մϴ�.
 *
 * @return ���α׷��� ���� ����. ���� ���� �� 0�� ��ȯ�մϴ�.
 */
int main(void)
{
    // ������ ���� �迭
    int numbers[] = { 3, 2, 1, 5, 4 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // qsort �Լ��� ����Ͽ� �迭 ����
    qsort(numbers, size, sizeof(int), compare);

    // ���ĵ� �迭 ���
    printf("���� �� �迭: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    return 0;
}
