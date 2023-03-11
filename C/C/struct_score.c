#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 구조체 설계.
typedef struct Score
{
    char name[10];  // *name : 이름
    int kor;
    int eng;
    int tot;
    double avg;
} Score;

int main(void)
{
    int i = 0;
    Score score[2];

    // 구조체 형 배열 초기화: scanf()
    for (i = 0; i < 2; i++)
    {
        printf("%d번째 이름: ", i + 1);
        scanf("%9s", score[i].name);
        printf("국어점수: ");
        scanf("%d", &score[i].kor);
        printf("영어점수: ");
        scanf("%d", &score[i].eng);
    }

    // Process : 총점과 평균 구하기.
    for (i = 0; i < 2; i++)
    {
        // 총점
        score[i].tot = score[i].kor + score[i].eng;
        // 평균
        score[i].avg = score[i].tot / 2.0;
    }

    // Output : 결과 출력
    printf("\n 이름  국어  영어  총점  평균\n");
    for (i = 0; i < 2; i++)
    {
        printf("%5s %5d %5d %5d %5.1f\n",
            score[i].name,
            score[i].kor,
            score[i].eng,
            score[i].tot,
            score[i].avg);
    }

    return 0;
}
