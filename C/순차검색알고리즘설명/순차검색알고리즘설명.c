#include <stdio.h>

void main()
{
	//[1] Input
	int intNum[] = { 5,4,3,2,1 };
	int intSearch;
	int i;
	//[2] Process
	puts("ã�� ������ : "); scanf("%d", &intSearch);
	for (i = 0; i < 5; i++)         //��� ������ �ݺ�
	{
		if (intNum[i] == intSearch) //��
		{
			printf("ã�ҽ��ϴ�.");
			break;
		}
	}
}
