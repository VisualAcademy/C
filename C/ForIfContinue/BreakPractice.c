// 1부터 10까지 출력할 때 사용자로부터 입력받은 수까지만 출력하는 프로그램
#include <stdio.h>

int main(void)
{
    printf("1부터 10까지 하나만 입력하세요: ");
    int number;
    scanf_s("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == number)
        {
            break; // 반복문 탈출
        }
    }
}
