//[?] 매개 변수(Parameter)가 있는 함수 만들고 호출하기 
#include <stdio.h>

// 매개 변수가 있는 함수
void showMessage(char* message)
{
    puts(message); // 넘어온 매개 변수의 값을 출력
}

void main()
{
    showMessage("매개 변수"); // ShowMessage() 함수에 "매개 변수" 문자열 전달
    showMessage("Parameter"); // ShowMessage() 함수에 "Parameter" 문자열 전달
}
