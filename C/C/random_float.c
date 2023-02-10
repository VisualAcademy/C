#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL)); // 난수 생성을 위한 seed 값 설정

    // 0.0부터 5.0 사이의 난수 생성
    double random_num = (double)rand() / RAND_MAX * (5.0 - 0.0) + 0.0;

    printf("%.2lf\n", random_num);
    return 0;
}
