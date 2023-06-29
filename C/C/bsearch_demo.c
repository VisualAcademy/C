#include <stdio.h>
#include <stdlib.h>

// �� �Լ�: �� ������ ���Ͽ� ���� ������ �����ϴ� �Լ�
int compare(const void* a, const void* b)
{
    // �� ��ȯ �� �� ������ ���� ��ȯ (����� ������ a < b, 0�̸� a == b, ����� a > b)
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int values[] = { 1, 2, 3, 4, 5 };

    // �迭�� ũ�� ���
    int n = sizeof(values) / sizeof(values[0]);

    // ã���� �ϴ� ��
    int target = 3;
    int* result;

    // ���� Ž�� ����
    // bsearch() �Լ��� ���ĵ� �迭���� Ư�� ��(target)�� ���� Ž�� ������� ã�´�.
    // ã�� ��� �ش� ���� �����͸� ��ȯ�ϰ�, �׷��� ���� ��� NULL�� ��ȯ�Ѵ�.
    result = bsearch(&target, values, n, sizeof(int), compare);

    // ��� ���
    if (result != NULL)
    {
        // ã�� ���, �ش� ���� �ε����� �Բ� ���
        printf("%d��(��) �ε��� %ld���� ã�ҽ��ϴ�.\n", target, result - values);
    }
    else
    {
        // ã�� ���� ���
        printf("%d��(��) ã�� ���߽��ϴ�.\n", target);
    }

    return 0;
}
