#include <stdio.h>

/**
 * @brief ���� ���� �Լ�
 *
 * �� �Լ��� �־��� ���� �迭�� ������������ �����մϴ�.
 * ���� �˰������δ� ���� ������ ����մϴ�.
 *
 * @param arr ������ ���� �迭
 * @param size �迭�� ũ��
 */
void bubble_sort(int arr[], int size)
{
    // 'size - 1'�� �ݺ��Ͽ� �迭�� ��� ��Ҹ� Ȯ��
    for (int i = 0; i < size - 1; i++)
    {
        // �迭�� 'size - i - 1'��° ��ұ��� �ݺ�
        for (int j = 0; j < size - i - 1; j++)
        {
            // ���� ��Ұ� ���� ��Һ��� ũ�ٸ�
            if (arr[j] > arr[j + 1])
            {
                // �� ����� ��ġ�� �ٲߴϴ�
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief ���α׷��� ���� �Լ�
 *
 * �� �Լ������� ���� �迭�� �����ϰ� ���� ���� �Լ��� ȣ���Ͽ� �迭�� �����մϴ�.
 * �� ��, ���ĵ� �迭�� ����մϴ�.
 *
 * @return ���α׷��� ���� ����. ���� ���� �� 0�� ��ȯ�մϴ�.
 */
int main(void)
{
    // ������ ���� �迭
    int arr[] = { 34, 12, 45, 8, 21, 17 };

    // �迭�� ũ�� ���
    int size = sizeof(arr) / sizeof(arr[0]);

    // �迭�� ���� ����
    bubble_sort(arr, size);

    // ���ĵ� �迭 ���
    printf("���� ���� �� �迭: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
