// 최댓값(MAX), 최솟값(MIN) 알고리즘

#include <stdio.h>

void main(void)
{
    //[1] Init
    int i = 0;
    //[1] 변수 초기화 
    int intMax = 0;  // 최댓값: 가장 작은 값.
    int intMin = 100;  // 최솟값: 가장 큰 값.
    // 5개의 정수 대입 배열
    int intNum[5] = { 21, 50, 33, 45, 7 };

    //[2] Process
    for (i = 0; i < 5; i++) {
        if (intNum[i] > intMax) {
            intMax = intNum[i];  // 큰 값 저장
        }
    }
    for (i = 0; i < 5; i++) {
        if (intNum[i] < intMin) {
            intMin = intNum[i];  // 작은 값 저장
        }
    }

    //[3] Output
    printf("최댓값 : %d\n", intMax);
    printf("최솟값 : %d\n", intMin);

    return 0;
}
