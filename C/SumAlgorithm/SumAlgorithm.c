//[?] n���� ���� ���� �߿��� 80�� �̻��� ������ �հ�
#include <stdio.h>

// �հ� �˰���(Sum Algorithm): �־��� ������ �־��� ���ǿ� �ش��ϴ� �ڷ���� �հ�
main()
{
	//[0] Initialize
	int sum = 0; // �հ� 

	//[1] Input: �Է�: n���� ���� ����
	int scores[6] = { 100, 75, 50, 37, 90, 95 };
	int N = sizeof(scores) / sizeof(int); // �ǻ��ڵ�(�����ڵ�)

	//[2] Process: ó��: �հ� �˰��� ����: �־��� ������ �־��� ����(���͸�)
	for (int i = 0; i < N; i++)
	{
		if (scores[i] >= 80)
		{
			sum += scores[i]; // SUM
		}
	}

	//[3] Output: ���
	printf("%d���� ���� �� 80�� �̻��� ����: %d\n", N, sum);
}
