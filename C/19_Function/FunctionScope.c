// Function Scope: 함수 범위, 전역 변수와 지역 변수
#include <stdio.h>

char* message = "전역 변수";

void ShowMessage()
{
    char* message = "지역 변수";
    printf("%s\n", message);  // 지역 변수
}

int main()
{
    ShowMessage(); // 지역 변수
    printf("%s\n", message); // 전역 변수

    return 0;
}
