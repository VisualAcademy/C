#include <stdio.h>

int main(void)
{
    char buffer[80];
    int first = 0;
    int second = 0;
    int max = 0;

    printf("첫 번째 수: ");
    gets(buffer); // 문자열을 담을 수 있는 그릇에 저장
    first = atoi(buffer); // 문자열 형태의 숫자를 실제 정수 형식으로 변환

    printf("두 번째 수: ");
    gets(buffer);
    second = atoi(buffer);

    // 조건(3항) 연산자를 사용하여 큰 값 구하기 
    max = (first > second) ? first : second;
    printf("큰 값: %d\n", max);

    return 0;
}
