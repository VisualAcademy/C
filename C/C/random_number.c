#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num;
    srand(time(NULL)); // ���� ������ ���� �õ尪 ����
    num = rand() % 10 + 1; // 1���� 10 ������ ���� ����
    printf("1���� 10 ������ ����: %d\n", num);
    return 0;
}
