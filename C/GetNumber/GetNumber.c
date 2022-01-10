// get_number.c
#include <stdio.h>

int main(void)
{
    int number1 = 0;
    int number2 = 0;
    char buffer[80];

    printf("첫 번째 숫자 입력: "); gets(buffer); number1 = atoi(buffer);
    printf("입력한 숫자는 %d입니다.\n", number1);

    printf("두 번째 숫자 입력: "); gets(buffer); number2 = atoi(buffer);
    printf("입력한 숫자는 %d입니다.\n", number2);

    return 0;
}
