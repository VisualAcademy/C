//[?] �־���(������ ����) �������� ����(���)�� ���ϴ� ����
#include <stdio.h>

// ���� �˰���(Rank Algorithm): ���� �����Ϳ� ���� ���� ���ϱ�
main()
{
	//[1] Input
	int scores[5] = { 90, 87, 100, 95, 80 }; // ���: 3, 4, 1, 2, 5
	int rankings[5] = { 0, }; // ��� 0���� �ʱ�ȭ
	int N = sizeof(scores) / sizeof(int); 

	//[2] Process: RANK
	for (int i = 0; i < N; i++)
	{
		rankings[i] = 1; // 1������ �ʱ�ȭ, ���� �迭�� �� ȸ������ 1������ �ʱ�ȭ
		for (int j = 0; j < N; j++)
		{
			if (scores[i] < scores[j]) // ����(i)�� ��������(j) ��
			{
				rankings[i]++; // RANK: ������ ū ������ ������ ���� 1����
			}
		}
	}

	//[3] Output
	for (int i = 0; i < N; i++)
	{
		printf("%3d��: %d��\n", scores[i], rankings[i]);
	}
}
