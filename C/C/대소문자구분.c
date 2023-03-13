// 대문자로 변경 : strupr()
// 소문자로 변경 : strlwr()
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[80];

    printf("영문 문자열을 입력 : ");
    fgets(buffer, sizeof(buffer), stdin);

    strupr(buffer); // String UpperCase
    printf("%s", buffer);

    strlwr(buffer); // String LowerCase
    printf("%s", buffer);

    return 0;
}
