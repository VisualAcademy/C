//순위(RANK) 알고리즘 : 모든 데이터를 1등으로 
//초기화 시킨 후 비교데이터가 더 크면 1씩 등수 증가
#include <stdio.h>

void main(void)
{
    // Input
    int intNum[5] = { 333, 212, 44, 155, 112 };
    int i, j;
    int rankArray[5];
    int rank = 0;//등수를 저장할 변수
    // Process
    for (i = 0; i < 5; i++) {
        rank = 1; // 데이터 비교전에 무조건 1등
        for (j = 0; j < 5; j++) {
            if (intNum[i] < intNum[j]) {
                rank++;// 나보다 큰 점수가 나오면 순위증가
            }
            rankArray[i] = rank; // 순위 기록
        }
    }
    // Output
    printf("   점수  등수\n");
    for (i = 0; i < 5; i++) {
        printf(
            "%7d %7d\n", intNum[i], rankArray[i]);
    }
}
