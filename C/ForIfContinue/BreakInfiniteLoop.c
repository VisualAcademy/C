#include <stdio.h>

int main(void)
{
    int number = 0;

    while (1) // ���� ����
    {
        printf("%d\n", ++number);

        if (number >= 5)
        {
            break; // break ������ ���� ���� ���� ������ 
        }
    }

    return 0;
}
