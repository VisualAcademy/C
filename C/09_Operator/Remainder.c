//[?] 나머지 연산자(Remainder Operator): 몫이 아닌 나머지 값 구하기
#include <stdio.h>

int main(void)
{
    int first = 5;
    int second = 3;
    int result = 0;

    result = first % second; // 5 / 3 => 나머지 값인 2를 반환

    printf("나머지 값: %d\n", result); // 몫: 1, 나머지: {2}

    return 0;
}
