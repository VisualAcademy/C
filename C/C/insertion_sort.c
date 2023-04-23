#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE], temp, j;
    printf("5개의 정수를 입력하세요:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < SIZE; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
    printf("정렬된 배열: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
