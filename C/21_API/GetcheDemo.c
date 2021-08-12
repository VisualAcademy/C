//[?] getche() 함수: getch() 동일하게 콘솔 화면에서 문자 하나를 입력하나 Echo 기능이 추가됨
#include <stdio.h>

int main()
{
    int grade;

    printf("당신의 학점은? (A, B, C, D, F) _\b");
    grade = getche();
    printf("\n입력한 학점은 %c입니다.\n", grade);

    return 0;
}
