#include <stdio.h>

int main(void)
{
    register int x, s = 0;  // 레지스터 변수를 선언

    for (x = 1; x <= 10; x++)
    {
        s += x;  // 레지스터 변수를 이용해 합을 계산
    }

    printf("1~10까지 합 : %d\n", s);  // 계산된 합을 출력

    return 0;
}
