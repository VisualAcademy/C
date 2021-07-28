//[?] _strlwr_s() 함수: 문자열을 모두 소문자로 변경 
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "C Language";

    printf("%s\n", str); // C Language

    _strlwr_s(str, 20); // strlwr(): 비표준 구버전

    printf("%s\n", str); // c language

    return 0;
}
