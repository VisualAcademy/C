//[?] &&(AND) 연산자: 둘 다 참일 때에만 참
#include <stdio.h>

main()
{
    //[A] 둘 다 참일때에만 참
    printf("%d\n", 1 && 1); // 1
    //[B] 하나라도 거짓이면 거짓
    printf("%d\n", 1 && 0); // 0
}
