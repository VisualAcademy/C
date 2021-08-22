// 반환값이 있는 함수 만들고 호출하기 
#include <stdio.h>

char* GetString()
{
    return "반환값(Return Value)"; // return 키워드로 단순 문자열 반환
}

int main()
{
    // GetString() 함수 호출 후 반환된 반환값을 returnValue 변수에 저장
    char* returnValue = GetString();
    printf("%s\n", returnValue);

    return 0;
}
