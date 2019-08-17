#include <stdio.h>

void main()
{
	//[1] Input
	int intNum[] = { 5,4,3,2,1 };
	int intSearch;
	int i;
	//[2] Process
	puts("찾을 데이터 : "); scanf("%d", &intSearch);
	for (i = 0; i < 5; i++)         //모든 데이터 반복
	{
		if (intNum[i] == intSearch) //비교
		{
			printf("찾았습니다.");
			break;
		}
	}
}
