//[?] 후위(Postfix) 증감 연산자: 우선순위가 낮음
#include <stdio.h>

main()
{
    int x = 3;

    int y = x++;

    printf("%d\n", y); // 3
}
