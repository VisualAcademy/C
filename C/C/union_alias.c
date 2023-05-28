#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

typedef union Data DataType;

int main(void)
{
    DataType data;

    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 220.5;
    printf("data.f: %f\n", data.f);

    strcpy(data.str, "C programming");
    printf("data.str: %s\n", data.str);

    return 0;
}
