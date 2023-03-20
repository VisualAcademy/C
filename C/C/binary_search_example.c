// binary_search_example.c 

#include <stdio.h>
#include <stdlib.h>
#include <search.h>

// ���� �񱳸� ���� ����� ���� �Լ�
int compare_integers(const void* value1, const void* value2) {
    return (*(int*)value1 - *(int*)value2);
}

// �迭 ����� ���� �Լ�
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int search_key = 5; // ã���� �ϴ� ��
    int* found_value; // �˻� ����� ������ ������
    int numbers[5] = { 45, 12, 5, 89, 27 }; // �˻� ��� �迭

    printf("���� ��: ");
    print_array(numbers, 5); // ���� �� �迭 ���

    // �迭�� ������������ ����
    qsort(numbers, 5, sizeof(numbers[0]), compare_integers);

    printf("���� ��: ");
    print_array(numbers, 5); // ���� �� �迭 ���

    // ���� �˻� ���� (ã���� �ϴ� ��, �迭, �迭 ũ��, �迭 ���� ũ��, �� �Լ�)
    found_value = 
        bsearch(&search_key, numbers, 5, sizeof(numbers[0]), compare_integers);

    // �˻� ��� ���
    if (found_value)
    {
        printf("%d�� %ld�� ��ġ���� ã�ҽ��ϴ�.\n", 
            search_key, found_value - numbers);
    }
    else
    {
        printf("%d�� ã�� ���߽��ϴ�.\n", search_key);
    }

    return 0;
}
