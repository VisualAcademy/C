#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int* p = (int*)calloc(10, sizeof(int)); // 메모리 할당과 동시에 초기화(0)
    p = (int*)realloc(p, 20 * sizeof(int)); // 재할당(기존 자료 복사)

    for (i = 0; i < 20; i++)
    {
        printf("%d\n", p[i]); // 할당된 메모리 출력
    }

    free(p); // 메모리 해제
    return 0;
}
