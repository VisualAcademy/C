//[?] putch() 함수: 콘솔 화면에 문자 하나를 출력
#include <stdio.h>

int main()
{
    putch('A');
    putch('\n'); // 이스케이프 시퀀스도 하나의 문자로 표현 
    putch(65); // 문자 'A'에 해당하는 아스키코드 값으로 문자 출력

    return 0;
}
