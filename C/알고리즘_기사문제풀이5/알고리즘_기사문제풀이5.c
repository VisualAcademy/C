//S=1-2+4-7+11-16+22과 같은 수열의 합
#include <stdio.h>

int main(void) {
    // Input 
    int sum = 0; // 전체 수열의 합
    int index = 0; // 인덱스 저장
    int current = 1; // 1부터 시작
    // Process
    for (index = 0; index < 7; index++) {
        current += index; // 인덱스 + 전 데이터
        if (index % 2 == 0) { // 홀수(N-1)
            sum += current;
        }
        else {
            sum += -current;
        }
    }
    // Output
    printf("수열의 합 : %d\n", sum);
}
