#include <stdio.h>

int main(void)
{
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int* p;

    p = &a[0][0]; // 2차원 배열의 시작 번지를 p에 기억

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(p + i)); // p는 주소이므로 역참조하여 값을 가져온다.
    }
    printf("\n");

    return 0;
}
