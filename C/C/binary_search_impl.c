// binary_search_impl.c || �˰���_�̺�Ž��.c 
#include <stdio.h>

#define N 5 // ���ĵ� �������� ��

int main(void)
{
    // ���ĵ� ������ �迭
    int sortedArray[] = { 21, 33, 35, 47, 59 };

    int key; // ����ڷκ��� �Է¹��� �˻� Ű
    int low = 0; // �˻� ������ ���� �ε���
    int high = N - 1; // �˻� ������ �� �ε���
    int mid; // �˻� ������ �߰� �ε���
    int flag = 0; // �˻� ���� ���� �÷���

    printf("Ž���� ������: ");
    if (scanf("%d", &key) != 1)
    {
        printf("�ùٸ� ���ڸ� �Է��ϼ���.\n");
        return 1;
    }

    while (low <= high)
    {
        mid = low + (high - low) / 2; // �߰� �ε��� ��� (�����÷� ����)

        if (sortedArray[mid] == key)
        {
            printf("%d�� %d��°�� �ֽ��ϴ�.\n", key, mid + 1);
            flag = 1;
            break;
        }
        else if (sortedArray[mid] < key)
        {
            low = mid + 1; // �˻� ������ ���� �������� ����
        }
        else
        {
            high = mid - 1; // �˻� ������ ���� �������� ����
        }
    }

    if (!flag)
    {
        printf("ã�� �� �����ϴ�.\n");
    }

    return 0;
}
