/*
    예제: 1부터 100까지 짝수의 합을 구하는 프로그램
*/
#include <stdio.h>

int main(void)
{
    int sumOfEvens = 0; // 짝수의 합을 저장할 변수
    int counter = 0;    // 반복문의 카운터로 사용할 변수

    // 1부터 100까지 반복
    counter = 1;          // 초기화
    while (counter <= 100) // 조건 검사
    {
        if (counter % 2 == 0) // 짝수 판별
        {
            sumOfEvens += counter; // 짝수이면 합계에 더함
        }
        counter++; // 다음 숫자로 증가
    }

    // 결과 출력
    printf("1부터 100까지 짝수의 합: %d\n", sumOfEvens);

    return 0;
}
