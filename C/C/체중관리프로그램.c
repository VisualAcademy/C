#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 4

// [0] 구조체 설계
struct Record {
    int Class;      // 반
    int Num;        // 번호
    float Weight;   // 몸무게
};

int main(void) {
    // [1] Init
    int i = 0;           // 루프
    int count = 0;        // 카운트 체크
    int classNum = 1;     // 1~9반 처리
    float avg = 0;        // 반총점/반평균
    int tot = 0;          // 전체총점
    float avgTotal = 0;   // 전체평균
    struct Record objRecord[N]; // 구조체
    // [2] Input
    for (i = 0; i < N; i++) {
        printf("\n반 : _\b");
        scanf("%d", &objRecord[i].Class);
        printf("\n번호 : _\b");
        scanf("%d", &objRecord[i].Num);
        printf("\n몸무게 : _\b");
        scanf("%f", &objRecord[i].Weight);
    }
    // [3] Process
    for (i = 0; i < N; i++) {
        // [i] 반별 평균 : 1~9반
        // [ii] 전체 총점
        tot += objRecord[i].Weight;
    }
    // [iii] 전체 평균
    avgTotal = tot / N;
    printf("\n");
    // [4] Output
    printf("반 번호 몸무게\n");
    for (classNum = 1; classNum <= 9; classNum++) {
        for (i = 0; i < N; i++) {
            if (objRecord[i].Class == classNum) {
                printf("%d %d %.1f\n"
                    , objRecord[i].Class
                    , objRecord[i].Num
                    , objRecord[i].Weight
                );
                avg += objRecord[i].Weight;
                count++;
            }
        }
        for (i = 0; i < N; i++) {
            if (objRecord[i].Class == classNum) {
                printf("%d반 평균 : %.1f\n"
                    , classNum, (avg / count));
                break;
            }
        }
        avg = 0;
        count = 0;
    }
    // [!] 전체평균
    printf("전체평균 : %.1f\n", avgTotal);

    return 0;
}
