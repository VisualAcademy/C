//[?] 정수를 양의 정수, 0, 음의 정수로 판단하기(else if)
#include <stdio.h>

main()
{
    int number = -1234;

    if (number > 0)
    {
        printf("%d는 양수입니다.\n", number);
    }
    else if (number < 0)
    {
        printf("%d는 음수입니다.\n", number);
    }
    else
    {
        printf("%d는 0입니다.\n", number);
    }
}
