#include <stdio.h>
#include <limits.h> // INT_MIN, INT_MAX�� ����� �������

main()
{
	//[1] Input
	int intNum[5] = { -33, -22, -44, -5, -11 };
	int intMax = INT_MIN; // INT_MIN : ������ �� ���� ������
	int i = 0;
	//[2] Process : �ִ밪(MAX) �˰���
	for (i = 0; i < 5; i++)
	{
		if (intMax < intNum[i])     // �ִ밪�������� ū ������
		{
			intMax = intNum[i];     // �ش� �����͸� �ִ밪���� ����
		}
	}
	//[3] Output
	printf("�ִ밪 : %d\n", intMax);// -5
}
