#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief �� �Լ�
 *
 * �� �Լ��� �� ���ڿ��� ���Ͽ� ù ��° ���ڿ��� ���������� �ռ��� ����,
 * ������ 0, �ڵ����� ����� ��ȯ�մϴ�.
 * �� �Լ��� qsort �Լ��� ���� ȣ��Ǿ� �迭�� ���� ������ �����մϴ�.
 *
 * @param a ���� ù ��° ���ڿ��� ������
 * @param b ���� �� ��° ���ڿ��� ������
 * @return strcmp �Լ��� ����Ͽ� ù ��° ���ڿ��� �� ��° ���ڿ��� ���� ���
 */
int compare(const void* a, const void* b)
{
    return strcmp(*(const char**)a, *(const char**)b);
}

/**
 * @brief ���α׷��� ���� �Լ�
 *
 * �� �Լ������� ���ڿ� �迭�� �����ϰ� qsort �Լ��� ȣ���Ͽ� �迭�� �����մϴ�.
 * �� ��, ���ĵ� �迭�� ����մϴ�.
 *
 * @return ���α׷��� ���� ����. ���� ���� �� 0�� ��ȯ�մϴ�.
 */
int main(void)
{
    // ������ ���ڿ� �迭
    const char* fruits[] = { "Orange", "Apple", "Banana" };
    int size = sizeof(fruits) / sizeof(fruits[0]);

    // qsort �Լ��� ����Ͽ� �迭 ����
    qsort(fruits, size, sizeof(const char*), compare);

    // ���ĵ� �迭 ���
    printf("���� �� ���� �̸�: ");
    for (int i = 0; i < size; i++)
    {
        printf("%s ", fruits[i]);
    }

    printf("\n");
    return 0;
}
