#include <stdio.h>

main()
{
    int f = 10;
    int s = 5;
    int r = f % s; // r 변수에는 (f / s) 결과의 나머지 값이 저장
    printf("%d %% %d = %d\n", f, s, r);
}
