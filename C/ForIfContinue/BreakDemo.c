#include <stdio.h>

int main(void)
{
    // break 문: for, while, do 구문을 빠져나가는 역할
    for (int i = 0; i < 100; i++)
    {
        if (i == 5)
        {
            break; // i == 5일 때 for문 종료
        }
        printf("%d번 반복\t", (i + 1));
    }
    printf("\n");

    return 0;
}
