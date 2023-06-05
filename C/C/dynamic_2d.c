#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows, cols;
    printf("세로의 수를 입력하세요: ");
    scanf("%d", &rows);
    printf("가로의 수를 입력하세요: ");
    scanf("%d", &cols);

    // int형 이중 포인터에 세로의 수만큼 메모리를 할당합니다.
    int** array = (int**)malloc(rows * sizeof(int*));

    // 각 세로에 대하여 가로의 수만큼 메모리를 할당합니다.
    for (int i = 0; i < rows; i++)
    {
        array[i] = (int*)malloc(cols * sizeof(int));
    }

    int value = 1; // 자동으로 증가하는 숫자값을 위한 변수
    // 2차원 배열의 원소는 자동으로 증가하는 숫자값으로 설정됩니다.
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = value++; // 숫자값을 배열에 할당하고, value를 1 증가
        }
    }

    // 2차원 배열 출력
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // 동적 할당된 메모리를 해제합니다.
    for (int i = 0; i < rows; i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}
