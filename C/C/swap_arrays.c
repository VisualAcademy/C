#include <stdio.h>

// �迭�� ��Ҹ� ����ϴ� �Լ��Դϴ�.
void print_array(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// �� �迭�� ��Ҹ� ��ȯ�ϴ� �Լ��Դϴ�.
void swap_array(int* first, int* second, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp = first[i];
        first[i] = second[i];
        second[i] = temp;
    }
}

int main(void)
{
    int first[] = { 1, 2, 3, 4, 5 };
    int second[] = { 50, 40, 30, 20, 10 };

    printf("��ȯ ��\n");
    printf("ù��° �迭: ");
    print_array(first, 5);
    printf("�ι�° �迭: ");
    print_array(second, 5);

    swap_array(first, second, 5); // �� �迭�� ��Ҹ� ��ȯ�մϴ�.

    printf("��ȯ ��\n");
    printf("ù��° �迭: ");
    print_array(first, 5);
    printf("�ι�° �迭: ");
    print_array(second, 5);

    return 0;
}
