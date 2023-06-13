#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str1[] = "C Programming language";
    const char str2[] = "C Pro";

    printf("str1에서 str2의 문자들이 연속으로 일치하는 부분의 길이: %lu\n"
        , strspn(str1, str2));
    return(0);
}
