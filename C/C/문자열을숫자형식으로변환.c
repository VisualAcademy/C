/*
    문자열을 숫자형식으로 변환
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    char str[] = "3.1415구이6525";

    int i;
    long l;
    double d;

    i = atoi(str);
    l = atol(str);
    d = atof(str);

    printf("\na = %d, b = %ld, c = %lf", i, l, d);
    getch();

    return 0;
}
