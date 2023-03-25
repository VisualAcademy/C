/*
    8.1.4. 예제. 구조체를 사용한 성적처리 프로그램 :
    구조체_성적처리.c
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 구조체 설계.
typedef struct Score {
    char name[10];  // *name : 이름
    int kor;
    int eng;
    int tot;
    double avg;
} Score;

int main() {
    int i = 0;
    Score objScore[2];

    /*
    struct Score objScore[2] = {
         {"홍길동",95,80,0,0.0},
         {"백두산",80,100,0,0.0}
    };
    */

    // 구조체 형 배열 초기화 : scanf()
    for (i = 0; i < 2; i++) {
        printf("\n%d번째 이름 : ", i + 1);
        scanf("%9s", objScore[i].name);
        printf("\n국어점수 : ");
        scanf("%d", &objScore[i].kor);
        printf("\n영어점수 : ");
        scanf("%d", &objScore[i].eng);
    }

    // Process : 총점과 평균 구하기.
    for (i = 0; i < 2; i++) {
        // 총점
        objScore[i].tot = objScore[i].kor + objScore[i].eng;
        // 평균
        objScore[i].avg = objScore[i].tot / 2.0;
    }

    // Output : 결과 출력
    printf("이름\t국어\t영어\t총점\t평균\t\n");
    for (i = 0; i < 2; i++) {
        printf("%6s %4d %4d %4d %4.1f\n",
            objScore[i].name,
            objScore[i].kor,
            objScore[i].eng,
            objScore[i].tot,
            objScore[i].avg);
    }
    return 0;
}
