//[?] 1���� 20������ ���� �� Ȧ���� ���� ���ϴ� ���α׷� 
// 1, 3, 5, 7, 9, ... 
#include <stdio.h>

// ��������(Arithmetic Sequence): �����ϴ� �� ���� ���̰� ������ ���� 
main()
{
	//[1] Input
	int sum = 0; // SUM

	//[2] Process
	for (int i = 1; i <= 20; i++) // �־��� ���� 
	{
		if (i % 2 != 0) // �־��� ����: ���͸�(Ȧ��) 
		{
			sum += i; // SUM
			printf("%d ", i); // SEQUENCE -> Arithmetic Sequence
		}
	}

	//[3] Output
	printf("\n1���� 20������ Ȧ���� ��: %d\n", sum); // 100
}
