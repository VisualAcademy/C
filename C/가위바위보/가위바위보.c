#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

static const char* CHOICE[] = { "가위", "바위", "보" };
static const char* WIN = "승";
static const char* LOSE = "패";
static const char* TIE = "비김";

int main(void)
{
	int iRandom = 0; // 1(가위), 2(바위), 3(보)
	int iSelection = 0;

	// 컴퓨터의 랜덤값 저장
	srand(time(0));
	iRandom = (rand() % 3) + 1;

	printf("1(가위), 2(바위), 3(보) 입력 : _\b");
	scanf("%d", &iSelection);

	printf("\n 사용자 : %s", CHOICE[iSelection - 1]);
	printf("\n 컴퓨터 : %s\n\n", CHOICE[iRandom - 1]);

	// 결과 출력
	if (iSelection == iRandom)
	{
		printf(TIE);
	}
	else
	{
		switch (iSelection)
		{
		case 1: printf(iRandom == 3 ? WIN : LOSE); break;
		case 2: printf(iRandom == 1 ? WIN : LOSE); break;
		case 3: printf(iRandom == 2 ? WIN : LOSE); break;
		}
	}
	printf("\n");
}
