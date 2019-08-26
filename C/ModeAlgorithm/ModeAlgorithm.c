//[?] �־��� �����Ϳ��� ���� ���� ��Ÿ��(�ߺ���) ��
#include <stdio.h>
#include <limits.h>

#define N 5

// �ֺ� �˰���(Mode Algorithm): ���� �ε���(0~n)�� ����(COUNT)�� �ִ�(MAX)
main()
{
	//[1] Input: ������ 0���� n�������� ������ ���´ٰ� ����
	int scores[N] = { 1, 3, 4, 3, 5 }; // 0~5������ ���´ٰ� ����
	int indexes[N + 1] = { 0, }; // 0~5���� ���� �ε����� ���� ����
	int max = INT_MIN; // MAX �˰��� ����
	int mode = 0; // �ֺ��� ��� �׸�

	//[2] Process: Data -> Index -> Count -> Max -> Mode
	for (int i = 0; i < N; i++)
	{
		indexes[scores[i]]++; // COUNT
	}
	for (int i = 0; i < N + 1; i++)
	{
		if (indexes[i] > max)
		{
			max = indexes[i]; // MAX(2)
			mode = i; // MODE(3)
		}
	}

	//[3] Output
	printf("�ֺ�: %d -> %d�� ��Ÿ��\n", mode, max);
}
