#include <stdio.h>

int main(void)
{
    char* p[] = { "C", "C++", "C#", "Java" };
    char** pp = p; // 이중 포인터 선언 및 포인터 배열 참조

    //[1] 원본 배열 사용 출력
    for (int i = 0; i < 4; i++)
    {
        printf("p[%d] = %s\n", i, p[i]);
    }

    //[2] 이중 포인터 사용 출력 
    for (int i = 0; i < 4; i++)
    {
        printf("\n*pp = %s", *pp);
        pp++;
    }

    return 0;
}
