//1/2 - 2/3 + 3/4 - 4/5 +.........+ 99/100
#include <stdio.h>

int main(void)
{
    // Input 
    double dblSum = 0; // 결과값
    int i = 0; // 반복용
    // Process
    for (i = 1; i <= 99; i++)
    {
        if (i % 2 == 1) // 홀수
        {
            dblSum += i / (double)(i + 1);
        }
        else
        {
            dblSum += -i / (double)(i + 1);
        }
    }
    // Output
    printf("결과 : %.2f\n", dblSum);//0.69
}
