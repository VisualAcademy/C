//[?] ������ �����͸� ������� [��������(ASC)|��������(DESC)] ����
#include <stdio.h>

// ���� �˰���(Sort Algorithm): ���� [����|ū] �����͸� �������� ������� �̵�
main()
{
	//[1] Input: Data Structure(Array, List, Stack, Queue, Tree, DB, ...)
	int data[] = { 3, 2, 1, 5, 4 };
	int N = sizeof(data) / sizeof(int); // �ǻ��ڵ�(�����ڵ�) ���·� �˰����� ǥ���ϱ� ����

	//[2] Process: Bubble Sort(��ǰ ����) �˰���
	for (int i = N - 1; i >= 0; i--) // i = N - 1 to 0 step -1
	{
		for (int j = 0; j < i; j++) // j = 0 to i
		{
			if (data[j] > data[j + 1]) // �ε�ȣ ����: ��������(>), ��������(<)
			{
				int temp = data[j]; data[j] = data[j + 1]; data[j + 1] = temp; // SWAP
			}
		}
	}

	//[3] Output: UI(Console, Desktop, Web, Mobile, ...)
	for (int i = 0; i < N; i++)
	{
		printf("%d\t", data[i]);
	}
	printf("\n");
}
