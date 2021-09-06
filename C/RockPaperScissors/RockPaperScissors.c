#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int r = 0;
    int iRandom = 0; // 1(가위), 2(바위), 3(보)
    int iSelection = 0; // 사용자 입력(1~3)
    const char* choice[] = { "가위", "바위", "보" };

    // 컴퓨터의 랜덤값 저장
    srand(time(0));
    iRandom = (rand() % 3) + 1;

    printf("1(가위), 2(바위), 3(보) 입력: _\b");
    r = scanf("%d", &iSelection);

    if (iSelection >= 1 && iSelection <= 3)
    {
        printf("\n 사용자: %s", choice[iSelection - 1]);
        printf("\n 컴퓨터: %s\n\n", choice[iRandom - 1]);

        // 결과 출력
        if (iSelection == iRandom)
        {
            printf("비김");
        }
        else
        {
            switch (iSelection)
            {
            case 1: printf(iRandom == 3 ? "승" : "패"); break;
            case 2: printf(iRandom == 1 ? "승" : "패"); break;
            case 3: printf(iRandom == 2 ? "승" : "패"); break;
            }
        }
        printf("\n");
    }
}
