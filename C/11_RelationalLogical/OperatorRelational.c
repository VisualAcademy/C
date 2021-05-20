// 관계형 연산자(비교 연산자;Relational Operator, Comparative Operator)
// 관계형 연산자: < 작음, <= 작거나 같음, > 큼, >= 크거나 같음, == 같음, != 다름
#include <stdio.h>

main()
{
    int x = 3;
    int y = 5;

    printf("%d\n", x == y); // false(0)
    printf("%d\n", x != y); // true(1)
    printf("%d\n", x > y);
    printf("%d\n", x >= y);
    printf("%d\n", x < y);
    printf("%d\n", x <= y);
}
