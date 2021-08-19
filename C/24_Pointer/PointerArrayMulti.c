#include <stdio.h>

int main()
{
    int arr[2][2] = { 2, 4, 6, 8 };

    int* ptr = arr; // 2차원 배열 참조

    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    return 0;
}
