#include <stdio.h>

int main(void)
{
    int arr1[][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };  // 3 * 4
    int arr2[][6] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };  // 2 * 6

    int arr1_col = sizeof(arr1[0]) / sizeof(int);
    int arr1_row = sizeof(arr1) / sizeof(arr1[0]);

    int arr2_col = sizeof(arr2[0]) / sizeof(int);
    int arr2_row = sizeof(arr2) / sizeof(arr2[0]);

    printf("arr1 열 수: %d\n", arr1_col);
    printf("arr1 행 수: %d\n", arr1_row);

    printf("arr2 열 수: %d\n", arr2_col);
    printf("arr2 행 수: %d\n", arr2_row);

    return 0;
}
