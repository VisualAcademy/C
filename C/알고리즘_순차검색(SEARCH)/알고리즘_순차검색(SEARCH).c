/*
	검색(탐색;SEARCH) 알고리즘 : 순차 탐색
*/
#include <stdio.h>

void main(void)
{
	//[1] Init
	int intData[10] = { 33, 21, 27, 39, 12, 5, 7, 29, 32, 65 };
	int i = 0;
	int intSearch = 0;
	int intFlag = 0;//거짓

	//[2] Input
	puts("찾을 데이터를 입력(정수) : ");
	scanf("%d", &intSearch);

	//[3] Process
	for (i = 0; i < 10; i++)
	{
		if (intSearch == intData[i])
		{
			intFlag = 1;
		}
	}

	//[4] Output
	if (intFlag)
	{
		printf("데이터를 찾았습니다.\n");
	}
	else
	{
		printf("데이터를 찾지 못했습니다.\n");
	}
}
