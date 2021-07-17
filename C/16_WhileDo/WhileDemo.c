//[?] while 문: 조건식이 참일 동안 반복 실행
#include <stdio.h>

int main()
{
    int i = 1; // 초기식부터
    while (i <= 5) // 조건식을 만족하는동안
    {
        printf("카운트: %d\n", i); // 실행문을 실행하고
        i++; // 증감식을 사용하여 인덱스 변수를 1씩증가 
    }
    return 0;
}
