// ����(�̺�) �˻�(Ž��) : Binary Search :
// - �����Ͱ� ���ĵǾ��ִٰ� ���� : �ٸ� ���� �˰��� Ȱ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int data[] = { 1, 4, 5, 7, 9 };
    int search;
    int low = 0;
    int mid = 0;
    int high = sizeof(data) / sizeof(int) - 1; // N - 1
    bool flag = false; // �� ã�Ҵٸ� ����.

    printf("�˻��� ������ : ");
    scanf("%d", &search);

    while (low <= high)
    {
        mid = (low + high) / 2; // �ݾ� ��� �˻�
        if (data[mid] == search)
        {
            printf("%d��(��) %d �ε������� ã�ҽ��ϴ�.\n", search, mid);
            flag = true;
            break; // ã������ ����
        }
        if (data[mid] < search)
        {
            low = mid + 1; // ���� ���� �˻��� �ʿ����
        }
        else
        {
            high = mid - 1; // ū ���� �˻��� �ʿ����
        }
    }
    if (!flag)
    {
        printf("%d�� ã�� �� �����ϴ�...\n", search);
    }

    return 0;
}
