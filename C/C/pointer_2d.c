#include <stdio.h>

int main(void)
{
    // 세로(행) 크기가 3, 가로(열) 크기가 4인 2차원 배열을 선언하고 초기화
    int row = 3, col = 4;
    int arr[3][4] = { {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12} };

    // ptr이라는 포인터 변수를 선언하고, arr의 주소를 대입.
    // 이때 ptr의 타입은 'int형 배열 4개'를 가리키는 포인터임을 명시.
    int(*ptr)[4] = arr;

    // i는 행을 가리키고, j는 열을 가리키는데, ptr + i는 i번째 행을 가리키고
    // *(ptr + i) + j는 i번째 행의 j번째 열을 가리킵니다.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", *(*(ptr + i) + j)); // 이를 역참조하여 값을 출력
        }
        printf("\n");
    }

    return 0;
}
