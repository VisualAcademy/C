#include <stdio.h>

int main(void)
{
    int number = 0;

    while (1) // 무한 루프
    {
        printf("%d\n", ++number);

        if (number >= 5)
        {
            break; // break 문으로 무한 루프 빠져 나오기 
        }
    }

    return 0;
}
