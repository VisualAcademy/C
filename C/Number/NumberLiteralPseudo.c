#include <stdio.h>

main()
{
    int i = 1234; // 16비트 정수
    long l = 1234L; // 32비트 정수
    float f = 3.14f; // 단정밀도 실수
    double d = 3.14; // 배정밀도 실수

    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%.2f\n", f);
    printf("%.2f\n", d);
}
