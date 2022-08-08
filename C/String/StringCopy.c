#include <stdio.h>
#include <string.h>

int main()
{
    char messages[6];

    //[?] C 언어는 문자 배열에 문자 리터럴을 사용해서 초기화 불가능
    //messages = "C/C++";

    //[!] 문자 배열에 문자 리터럴을 초기화할 때에는 strcpy() 함수 사용
    strcpy(messages, "C/C++");

    puts(messages);

    return 0;
}
