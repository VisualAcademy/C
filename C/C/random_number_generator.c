#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;

    // ���� ������ �õ尪 ����
    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", rand());
    }

    return 0;
}