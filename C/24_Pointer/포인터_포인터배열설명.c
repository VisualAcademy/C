// 포인터_포인터배열설명.c
// 포인터 배열
#include <stdio.h>

void main()
{
    char* s[3];

    s[0] = "AA";
    s[1] = "BB";
    s[2] = "CC";

    printf("%s %s %s\n", s[0], s[1], s[2]);
}
