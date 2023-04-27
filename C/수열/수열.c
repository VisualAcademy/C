// File: D:\C\C\C\수열\수열.c
/*
1/2 - 2/3 + 3/4 - 4/5 + ... 99/100 = ?
*/
#include <stdio.h>

int main(void)
{
    // Input
    double sum = 0;
    // Process
    for (int i = 1; i <= 99; i++)
    {
        if (i % 2 == 1)
        {
            sum += i / (double)(i + 1);//odd numbers
        }
        else
        {
            sum -= i / (double)(i + 1);//even numbers     
        }
    }
    // Output
    printf("1/2 - 2/3 + ... 99/100 = %.4f\n", sum);
    return 0;
}
