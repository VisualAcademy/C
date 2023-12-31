//임의의 4가지 수를 배열에 입력받아서 
//오름차순으로 정렬하여 출력
#include <stdio.h>

int main(void)
{
    // Input
    int intNum[4] = { 30, 20, 10, 50 };
    int i = 0, j = 0, temp = 0;     //[1]
    // Process
    for (i = 0; i < 4 - 1; i++)      //[2]
    {
        for (j = i + 1; j < 4; j++)     //[3]
        {
            if (intNum[i] > intNum[j])  //[4]
            {
                temp = intNum[i];         //[5]
                intNum[i] = intNum[j];
                intNum[j] = temp;
            }
        }
    }
    // Output
    for (i = 0; i < 4; i++)
    {
        printf("%d\t", intNum[i]);
    }
}
