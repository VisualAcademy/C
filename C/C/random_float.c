#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL)); // ���� ������ ���� seed �� ����

    // 0.0���� 5.0 ������ ���� ����
    double random_num = (double)rand() / RAND_MAX * (5.0 - 0.0) + 0.0;

    printf("%.2lf\n", random_num);
    return 0;
}
