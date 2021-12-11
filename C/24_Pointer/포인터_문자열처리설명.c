// 포인터_문자열처리설명.c
#include <stdio.h>

void main()
{
    char c = 'A';	// 값형
    char* s; // string s; // 참조형

    s = "안녕하\0세요.";

    printf("%c %s\n", c, s);
    printf("%s\n", s + 7);//영문1Byte, 한글2Byte
}
