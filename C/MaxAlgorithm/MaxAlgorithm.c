//[?] �־��� ������ �߿��� ���� ū ��
#include <stdio.h>
#include <limits.h>

// �ִ� �˰���(Max Algorithm): (�־��� ���� + �־��� ����)�� �ڷ���� ���� ū ��
main()
{
	//[0] Initialize
	int max = INT_MIN; // ���� ������ ������ �� ���� ���� ������ �ʱ�ȭ

	//[1] Input
	int numbers[5] = { -2, -5, -3, -7, -1 }; // MAX: -1
	int N = sizeof(numbers) / sizeof(int); 

	//[2] Process: MAX
	for (int i = 0; i < N; i++)
	{
		if (numbers[i] > max) // �� ū �����Ͱ� �ִٸ�
		{
			max = numbers[i]; // MAX: �� ū ������ �Ҵ�
		}
	}

	//[3] Output
	printf("�ִ�: %d\n", max); // -1
}
