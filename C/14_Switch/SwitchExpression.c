// switch 문 사용하기
#include <stdio.h>

main()
{
    int x = 2;

    switch (x)
    {
        case 1:
            printf("1입니다.\n"); // x가 1일 때 실행
            break;
        case 2:
            printf("2입니다.\n"); // x가 2일 때 실행
            break;
        default:
            printf("1과 2가 아닙니다.\n");
            break;
    }
}
