#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "C Language";

    char* ptr = strchr(str, 'a');   // str 문자열에서 'a' 문자 검색
    printf("%s\n", ptr);            // ange

    ptr = strrchr(str, 'a');        // str 문자열에서 'a' 문자 역순 검색
    printf("%s\n", ptr);            // age

    return 0;
}