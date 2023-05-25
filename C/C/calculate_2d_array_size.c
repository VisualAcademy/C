#include <stdio.h>

int main(void)
{
    int arr[3][4];
    int total_size = sizeof(arr);
    int element_size = sizeof(arr[0][0]);
    int total_elements = total_size / element_size;

    printf("2차원 배열의 총 크기: %d 바이트\n", total_size); // 48
    printf("배열의 한 원소 크기: %d 바이트\n", element_size); // 4
    printf("2차원 배열의 총 원소 개수: %d\n", total_elements); // 12

    return 0;
}
