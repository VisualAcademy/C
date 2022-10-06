// 최대값을 구하는 알고리즘
#include <stdio.h>
#include <limits.h> // INT_MIN, INT_MAX

void main(void)
{
    //[1] Input
    int intNum[] = { -3, -2, -1, -4, -5 };
    int intMax = INT_MIN;
    int i;
    int* p; p = intNum; // &intNum[0];

    //[2] Process: MAX
    for (i = 0; i < 5; i++)
    {
        if (intMax < *(p + i))
        {
            intMax = *(p + i);
        }
    }

    //[3] Output
    printf("최대값: %d\n", intMax);

    return 0;
}
