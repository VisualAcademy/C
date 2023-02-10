#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num;
    srand(time(NULL)); // 난수 생성을 위한 시드값 설정
    num = rand() % 10 + 1; // 1부터 10 사이의 난수 생성
    printf("1부터 10 사이의 난수: %d\n", num);
    return 0;
}
