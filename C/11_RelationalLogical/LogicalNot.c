// 논리 연산자: ! -> 논리 NOT: 참이면 거짓, 거짓이면 참으로 변환
#include <stdio.h>

main()
{
    // ! 연산자: NOT
    printf("!1 -> %d\n", !1); // 0
    printf("!0 -> %d\n", !0); // 1
    printf("!!0 -> %d\n", !!0); // 0
    printf("!(!(!0)) -> %d\n", !(!(!0))); // 1
}
