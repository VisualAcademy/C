#include <stdio.h>

// 점수 구조체 선언
struct score {
    int kor; int eng;
};

// 학생 구조체 선언
struct student {
    int num;
    struct score scores;
};

int main(void)
{
    // 구조체 배열 선언과 동시에 초기화 
    struct student s[3] = { {1, {100, 90}}, {2, {90, 80}}, {3, {80, 70}} };

    // for 문으로 구조체 배열 참조
    for (int i = 0; i < 3; i++)
    {
        printf("%d: %3d, %3d\n", s[i].num, s[i].scores.kor, s[i].scores.eng);
    }

    return 0;
}
