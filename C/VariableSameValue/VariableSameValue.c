#include <stdio.h>

int main(void)
{
    int a, b, c;

    //[1] 여러 개의 변수를 선언하고 같은 값으로 초기화하기
    a = b = c = 10;

    printf("%d, %d, %d\n", a, b, c);

    return 0;
}
