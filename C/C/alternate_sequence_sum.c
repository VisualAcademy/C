// 1-2+4-7+11-16+22 = ?
#include <stdio.h>

void main(void)
{
    //[1] Input
    int sum = 0; // 합
    int data = 1; // 1부터 시작해서 인덱스만큼 합을 한 데이터들...

    //[2] Process
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            sum += data; // 인덱스가 짝수일 때
        }
        else
        {
            sum -= data; // 인덱스가 홀수일 때...
        }
        data = data + (i + 1);
    }

    //[3] Output
    printf("결괏값: %d\n", sum);//13
    printf("결괏값: %d\n", (1 - 2 + 4 - 7 + 11 - 16 + 22));//13

    return 0;
}
