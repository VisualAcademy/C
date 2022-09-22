#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) // 3의 배수이고 그리고 5의 배수일 때
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) // 3의 배수일 때
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) // 5의 배수일 때
        {
            printf("Buzz\n");
        }
        else // 3의 배수 또는 5의 배수 또는 3과 5의 공배수가 아닐 때
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
