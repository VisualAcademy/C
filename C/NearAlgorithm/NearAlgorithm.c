//[?] ���� ������ �߿��� ��� �����Ϳ� ���� ����� ��
#include <stdio.h>
#include <limits.h>
#include <math.h>

// �ٻ� �˰���(Near Algorithm): ����� �� -> ���հ��� ������ �ּڰ�
main()
{
	//[0] Initialize
	int min = INT_MAX; // ���հ��� ������ �ּڰ��� ��� �׸�

	//[1] Input
	int numbers[5] = { 10, 20, 30, 27, 17 };
	int target = 25; // target�� ����� ��
	int near = 0; // ����� ��: 27
	int N = sizeof(numbers) / sizeof(int); 

	//[2] Process: NEAR
	for (int i = 0; i < N; i++)
	{
		int _abs = abs(numbers[i] - target); // ���հ��� ����
		if (_abs < min)
		{
			min = _abs; // MIN: �ּڰ� �˰���
			near = numbers[i]; // NEAR: ���հ��� ������ �ּڰ��� ���� ��
		}
	}

	//[3] Output
	printf("%d��/�� ���� ����� ��: %d(����: %d)\n", target, near, min);
}
