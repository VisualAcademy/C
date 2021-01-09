#include <stdio.h>

void main(void)
{
    // Init
    int MAX; // 최대값
    int MIN; // 최소값
    int S; // 합계
    int AVE; // 평균
    int I; // 카운트

    // Input
    int A[7] = { 30,24,71,41,43,86,70 };
    S = 0; I = 0; MAX = 0; MIN = 100; AVE = 0;

    // Process
    for (I = 0; I < 7; I++) {
        S += A[I];// [1]SUM
        if (A[I] > MAX) { // [2]Max
            MAX = A[I];
        }
        if (A[I] < MIN) { // [3]MIN
            MIN = A[I];
        }
    }
    AVE = S / (I - 1); // [4]AVG

    // Output
    printf("합계 : %d, 최대값 : %d, "
        "최소값 : %d, 평균 : %d\n"
        , S, MAX, MIN, AVE);
}
