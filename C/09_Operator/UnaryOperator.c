//[?] 단항 연산자(Unary Operator): +, -
#include <stdio.h>

main()
{
    int value = 0;

    value = 8; // value에 8 대입
    value = +value; // value의 값에 + 기호로 붙여 있는 그대로 표현
    printf("%d\n", value); // +8

    value = -8; // value에 -8 대입
    value = +value; // value의 값에 + 기호를 붙여 있는 그대로 표현
    printf("%d\n", value); // -8

    value = 8; // value에 8 대입
    value = -value; // value의 값에 - 기호를 붙여 부호를 반대로 변경
    printf("%d\n", value); // -8

    value = -8; // value에 -8 대입
    value = -value; // value의 값에 - 기호를 붙여 부호를 반대로 변경
    printf("%d\n", value); // +8
}
