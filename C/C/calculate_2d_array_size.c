#include <stdio.h>

int main(void)
{
    int arr[3][4];
    int total_size = sizeof(arr);
    int element_size = sizeof(arr[0][0]);
    int total_elements = total_size / element_size;

    printf("2���� �迭�� �� ũ��: %d ����Ʈ\n", total_size); // 48
    printf("�迭�� �� ���� ũ��: %d ����Ʈ\n", element_size); // 4
    printf("2���� �迭�� �� ���� ����: %d\n", total_elements); // 12

    return 0;
}
