/*
	�˻�(Ž��;SEARCH) �˰��� : ���� Ž��
*/
#include <stdio.h>

void main(void)
{
	//[1] Init
	int intData[10] = { 33, 21, 27, 39, 12, 5, 7, 29, 32, 65 };
	int i = 0;
	int intSearch = 0;
	int intFlag = 0;//����

	//[2] Input
	puts("ã�� �����͸� �Է�(����) : ");
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
		printf("�����͸� ã�ҽ��ϴ�.\n");
	}
	else
	{
		printf("�����͸� ã�� ���߽��ϴ�.\n");
	}
}
