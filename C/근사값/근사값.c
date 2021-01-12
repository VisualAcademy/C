#include <stdio.h>
#include <math.h> // abs()
#include <limits.h> 

void main(void)
{
    // Input 
    int intData[] = { 33,23,22,34,36 };//원본
    int intTargetData = 30;//타겟
    int intNear = 0; // 근사값
    int i = 0; // 반복용
    int intDiff[5] = { 0, }; // 차이값 저장
    int intAbs[5] = { 0, }; // 절대값 저장
    int intMin = INT_MAX; // 최소값 저장 변수
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", intData[i]);
    }printf("\n");
    // Process
    //[a] 차이값
    for (i = 0; i < 5; i++) {
        intDiff[i] = intData[i] - intTargetData;
        printf("%d\t", intDiff[i]);
    }printf("\n");
    //[b] 절대값
    for (i = 0; i < 5; i++) {
        intAbs[i] = abs(intDiff[i]);
        printf("%d\t", intAbs[i]);
    }printf("\n");
    //[c] 최소값
    for (i = 0; i < 5; i++) {
        if (intAbs[i] < intMin) {
            intMin = intAbs[i];
            //[d]차이의 절대값의 최소값일 때의 데이터
            intNear = intData[i];
        }
    }
    // Output
    printf("%d에 가장 가까운값 : %d\n"
        , intTargetData, intNear);
}
