#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

static const char* CHOICE[] = { "����", "����", "��" };
static const char* WIN = "��";
static const char* LOSE = "��";
static const char* TIE = "���";

int main(void)
{
	int iRandom = 0; // 1(����), 2(����), 3(��)
	int iSelection = 0;

	// ��ǻ���� ������ ����
	srand(time(0));
	iRandom = (rand() % 3) + 1;

	printf("1(����), 2(����), 3(��) �Է� : _\b");
	scanf("%d", &iSelection);

	printf("\n ����� : %s", CHOICE[iSelection - 1]);
	printf("\n ��ǻ�� : %s\n\n", CHOICE[iRandom - 1]);

	// ��� ���
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
