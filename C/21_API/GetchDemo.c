//[?] getch() 함수: 콘솔 화면에서 문자 하나를 입력 + 에코(입력한 문자가 표시) 표시 없음
#include <stdio.h>

int main()
{
    int grade;

    printf("당신의 학점은? (A, B, C, D, F) _\b");
    grade = getch();
    printf("\n입력한 학점은 %c입니다.\n", grade);

    return 0;
}
