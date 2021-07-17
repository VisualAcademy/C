// 피보나치 수열: 1 1 2 3 5 8 13 21 ...
#include <stdio.h>

int main()
{
    int first = 0;
    int second = 1;

    // while 문으로 피보나치 수열 표현하기 
    while (second <= 20)
    {
        printf("%d\n", second);
        int temp = first + second;
        first = second;
        second = temp;
    }

    return 0;
}
