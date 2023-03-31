// 문자열 길이 : strlen(): String Length
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char* str = " Abc Def Fed Cba ";

    puts(str);
    printf("문자열 길이 : %zu\n", strlen(str)); // Length는 n - 1 규칙 미적용 

    return 0;
}
