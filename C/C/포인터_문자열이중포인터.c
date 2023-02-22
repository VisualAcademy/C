#include <stdio.h>

int main()
{
    char* p[] = { "VB.NET", "C#", "Java", "VC++" };
    char** pp = p; // 이중 포인터 선언
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("\np[%d] = %p", i, (void*)p[i]);
    }
    printf("\npp = %p, &pp = %p", (void*)pp, (void*)&pp);

    for (i = 0; i < 4; i++)
    {
        printf("\np[%d] = %s", i, p[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("\n*pp = %s", *pp);
        pp++;
    }

    return 0;
}
