/*
1/2 - 2/3 + 3/4 - 4/5 + ... 99/100 = ?
*/
#include <stdio.h>

int main(void)
{
    //[1] Input
    double dblSum = 0;
    int i = 0;
    //[2] Process
    for (i = 1; i <= 99; i++)
    {
        if (i % 2 == 1)
        {
            dblSum += i / (double)(i + 1);//È¦¼öÀÏ¶§
        }
        else
        {
            dblSum -= i / (double)(i + 1);//Â¦¼öÀÏ¶§     
        }
    }
    //[3] Output
    printf("1/2 - 2/3 + ... 99/100 = %.4f\n", dblSum);
}
