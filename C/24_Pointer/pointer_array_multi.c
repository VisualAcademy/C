// 포인터배열_이차원배열참조.c
/*
    포인터변수에 2차원배열을 참조해서 호출
*/
#include <stdio.h>

int main(void)
{
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int* p;
    int i;

    p = arr;

    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d \n", *(p + i));
    }
}
