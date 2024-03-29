#include <stdio.h>

int main(void)
{
    int n = 5;                        // 주차 가능 대수
    int arr[] = { 5, 5, 5, 5, 55 };   // 주차 시간(분)
    int sum = 0;                      // 주차 요금 합계
    int p = 0;                        // 인덱스 반복

    do
    {
        int tmp = arr[p];
        int fare = 0;        // 요금 계산

        if (tmp >= 10)
        {
            fare = 500;
            if (tmp >= 30)
            {
                tmp = tmp - 30;
                do
                {
                    if (tmp >= 1)
                    {
                        fare = fare + 500;  // 500원씩 요금 증가
                        tmp = tmp - 10;     // 10분 단위로
                    }
                } while (tmp >= 1);
            }
        }

        if (fare > 25000)
        {
            fare = 25000; // 1일 최대 요금: 25,000원 
        }

        sum = sum + fare; // 요금 누적
        p = p + 1;        // 인덱스 증가 
    } while (p < n);

    printf("주차 요금 합계: %d\n", sum);
}
