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
        printf("�� �ڸ� ���� �Է��ϼ���: ");
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
            printf("�����մϴ�. �¸��߽��ϴ�.\n");
            break;
        }
        else
        {
            printf("%d ��Ʈ����ũ, %d ���Դϴ�.\n", strike, ball);
        }
    }
    return 0;
}
