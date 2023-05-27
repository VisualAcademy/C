#include <stdio.h>

// 배열의 요소를 출력하는 함수입니다.
void print_array(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// 두 배열의 요소를 교환하는 함수입니다.
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

    printf("교환 전\n");
    printf("첫번째 배열: ");
    print_array(first, 5);
    printf("두번째 배열: ");
    print_array(second, 5);

    swap_array(first, second, 5); // 두 배열의 요소를 교환합니다.

    printf("교환 후\n");
    printf("첫번째 배열: ");
    print_array(first, 5);
    printf("두번째 배열: ");
    print_array(second, 5);

    return 0;
}
