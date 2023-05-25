#include <stdio.h>

int main(void)
{
    int arr[][2][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,
                        10, 11, 12, 13, 14, 15, 16 };  // 2 * 2 * 4

    int depth = sizeof(arr) / sizeof(arr[0]);
    int row = sizeof(arr[0]) / sizeof(arr[0][0]);
    int col = sizeof(arr[0][0]) / sizeof(int);

    printf("arr 깊이: %d\n", depth);
    printf("arr 행 수: %d\n", row);
    printf("arr 열 수: %d\n", col);

    return 0;
}
