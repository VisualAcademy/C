// 1부터 10까지 정수의 합을 구해나갈 때 합이 22 이상이 되면 멈추는 프로그램
#include <stdio.h>

main()
{
    int goal = 22;
    int sum = 0;

    int i = 1;
    while (i <= 10)
    {
        sum += i;

        if (sum >= goal)
        {
            break; // 반복문 탈출
        }

        i++;
    }

    printf("1부터 %d까지의 합은 %d이고, 목표치 %d이상을 달성했습니다.\n", i, sum, goal);
}
