//1/2 - 2/3 + 3/4 - 4/5 +.........+ 99/100
#include <stdio.h>

int main(void)
{
    // Input 
    double dblSum = 0; // �����
    int i = 0; // �ݺ���
    // Process
    for (i = 1; i <= 99; i++)
    {
        if (i % 2 == 1) // Ȧ��
        {
            dblSum += i / (double)(i + 1);
        }
        else
        {
            dblSum += -i / (double)(i + 1);
        }
    }
    // Output
    printf("��� : %.2f\n", dblSum);//0.69
}
