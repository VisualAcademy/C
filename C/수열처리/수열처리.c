/*
1 - 2 + 3 - 4 + ... + 99 - 100 = ?
*/
#include <stdio.h>

main()
{
    //[1] Input
    int intSum = 0;
    int i;
    //[2] Process
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            intSum += i; // Ȧ����°
        }
        else
        {
            intSum -= i; // ¦����°
        }
    }
    //[3] Output
    printf("%d\n", intSum);//-50
}
