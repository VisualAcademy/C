//이번에는 C 언어를 이용하여 수열 합을 구하는 예제를 살펴보겠습니다.우선 아래와 같은 수열을 구해보겠습니다.
//
//1 + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) + (1 + 2 + 3 + 4 + 5)
//
//이 수열을 이용하여 C 언어로 작성된 코드는 다음과 같습니다.

#include <stdio.h>

int main(void)
{
    int i, j;
    int sum = 0; // 총합을 저장할 변수

    for (i = 1; i <= 5; i++) // 바깥쪽 for문으로 1부터 5까지 반복
    {
        int sub = 0; // 각 숫자별 합을 저장할 변수
        for (j = 1; j <= i; j++) // 안쪽 for문으로 1부터 i까지 반복
        {
            sub += j; // j를 sub에 누적
        }
        sum += sub; // sub 값을 sum에 누적
    }

    printf("%d\n", sum); // 총합 출력

    return 0;
}
/*
문제. 수열예제.c
수열 1 + (1 + 2) + (1 + 2 + 3) + (1 + 2 + 3 + 4) + (1 + 2 + 3 + 4 + 5)의
합을 구하는 프로그램을 작성하시오. 합(35)
*/
