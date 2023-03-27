// 5.1.6. 예제. 임의값(랜덤값) 출력 : 임의값출력.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;

    // 난수 생성기 시드값 설정
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", rand());
    }

    return 0;
}