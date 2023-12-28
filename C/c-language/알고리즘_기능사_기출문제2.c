#include <stdio.h>

int main(void)
{
    int K[3] = { 100, 90, 75 };//KOR
    int E[3] = { 100, 70, 80 };//ENG
    int S[3] = { 0, };//총점
    int R = 1;//석차용 변수
    int I = 0, J = 0;//반복용
    for (I = 0; I < 3; I++) {
        S[I] = K[I] + E[I];//누적
        R = 1; // 순위는 무조건 1등으로 초기화
        for (J = 0; J < 3; J++) {
            if (S[I] < S[J]) {
                R++; // 나보다 더 큰 점수가 나오면 순위증가
            }
        }
        printf("국어 : %d, 영어 : %d"
            "총점 : %d 순위 : %d\n"
            , K[I], E[I], S[I], R);
    }
}
