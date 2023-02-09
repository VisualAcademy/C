#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int answer[3];
    int i, j, strike, ball;
    int input[3];

    srand(time(NULL));

    for (i = 0; i < 3; i++)
    {
        answer[i] = rand() % 10;
        for (j = 0; j < i; j++)
        {
            if (answer[i] == answer[j])
            {
                i--;
                break;
            }
        }
    }

    while (1)
    {
        strike = 0;
        ball = 0;
        printf("세 자리 수를 입력하세요: ");
        scanf("%d %d %d", &input[0], &input[1], &input[2]);
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (input[i] == answer[j])
                {
                    if (i == j)
                    {
                        strike++;
                    }
                    else
                    {
                        ball++;
                    }
                }
            }
        }
        if (strike == 3)
        {
            printf("축하합니다. 승리했습니다.\n");
            break;
        }
        else
        {
            printf("%d 스트라이크, %d 볼입니다.\n", strike, ball);
        }
    }
    return 0;
}
