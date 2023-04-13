// 포인터_포인터배열초기화.c
#include <stdio.h>

int main(void)
{
    const char* a[] = { "아빠", "엄마", "아들", "공주" }; 

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}
