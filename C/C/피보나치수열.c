// 피보나치 수열의 n번째 반복까지의 합 :
// 예를 들어, 7번 반복 : 1 + 1 + 2 + 3 + 5 + 8 + 13 = 33
#include <stdio.h>

int main(void)
{
    //[1] Input
    int prev = 0; // 앞
    int next = 1; // 뒤
    int sum = prev + next; // 전체합
    int i = 1; // 인덱스 : 1번째부터...
    int n = 20; // 개수 : <- 이 값에 따라서 n번째 반복까지의 합을 구함
    int temp = 0; // 소계

    //[2] Process
    for (i = 1; i < n; i++)
    {
        temp = prev + next;
        sum += temp;
        prev = next; // 이전 자료를 현재 자료로 재설정
        next = temp;
    }

    //[3] Output
    printf("%d\n", sum);

    return 0;
}
