//[?] �־��� ������ �߿��� ���� ���� [¦��] ��
#include <stdio.h>
#include <limits.h>

// �ּڰ� �˰���(Min Algorithm): (�־��� ���� + �־��� ����)�� �ڷ���� ���� ���� ��
main()
{
	//[0] Initialize
	int min = INT_MAX; // ���� ������ ������ �� ���� ū ������ �ʱ�ȭ

	//[1] Input
	int numbers[5] = { 2, 5, 3, 7, 1 }; // MIN: 1 -> MIN: 2(¦��)
	int N = sizeof(numbers) / sizeof(int); 

	//[2] Process: MIN
	for (int i = 0; i < N; i++)
	{
		if (numbers[i] < min && numbers[i] % 2 == 0)
		{
			min = numbers[i]; // MIN: �� ���� ������ �Ҵ�
		}
	}

	//[3] Output
	printf("¦�� �ּڰ�: %d\n", min);
}
