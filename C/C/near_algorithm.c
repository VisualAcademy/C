// near_algorithm.c

// 가까운값(NEAR) 알고리즘 : 
// 주어진(원본) 데이터에서 대상(타겟) 데이터와 가장 가까운 값
// - (원본과 타겟의)차이값의 절대값의 최소값일 때의 원본 데이터
#include <stdio.h>
#include <limits.h>
#include <math.h>
void main(void) {
    //[1] Input
    int i = 0; int data[] = { 21, 15, 30, 45, 27 };
    int target = 31;        // 31과 가장 가까운값은? 
    int near = 0;           // 가장 가까운값이 담길 그릇
    int diff = 0;           // 차이값
    int min = INT_MAX;      // 차이값의 최소값을 저장
    //[2] Process  
    for (i = 0; i < 5; i++) {
        diff = data[i] - target;    // 차이값
        diff = abs(diff);           // 차이값의 절대값 //(diff < 0) ? -diff: diff;
        if (min > diff) {           // 최소값        
            min = diff;             // 최소값 알고리즘 
            near = data[i];     // 차이값의 절대값의 최소값일때의 데이터
        }
    }
    //[3] Output
    printf("%d와 가장 가까운값 : %d\n", target, near);
}
