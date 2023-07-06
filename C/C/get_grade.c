#include <stdio.h>

// 정수형 점수를 인자로 받아 해당하는 학점을 문자형으로 반환하는 함수
char get_grade(int score)
{
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

int main(void)
{
    int score = 85;
    char grade = get_grade(score);
    printf("점수 %d => 학점 %c\n", score, grade);

    return 0;
}
