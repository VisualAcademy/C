#include <stdio.h>

// int 타입의 별칭으로 integer를 정의합니다.
typedef int integer;

int main(void)
{
    // integer 타입의 변수 a를 선언하고 10으로 초기화합니다.
    integer a = 10;

    // 변수 a의 값을 출력합니다.
    printf("a = %d\n", a); // a = 10

    return 0;
}
