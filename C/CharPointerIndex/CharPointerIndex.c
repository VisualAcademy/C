// 문자열에서 문자 하나씩 뽑아 출력하기
#include <stdio.h>

main()
{
    char* name = "C Language";
    printf("%c ", name[0]);
    printf("%c%c%c%c\n", name[2], name[3], name[4], name[5]);
}
