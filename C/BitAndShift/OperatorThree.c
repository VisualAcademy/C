// 조건연산자(3항연산자) => ? :
// (조건식) ? 참일때수행문장 : 거짓일때수행문장;
#include <stdio.h>

int main(void)
{
    int num = 9;
    char result;

    // 3항 연산자(if문과 동일)
    result = (num % 2 == 0) ? 'T' : 'F';

    printf("결과 : %c\n", result);

    return 0; 
}
