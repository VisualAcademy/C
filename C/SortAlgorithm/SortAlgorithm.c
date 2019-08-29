//[?] ������ �����͸� ������� [��������(ASC)|��������(DESC)] ����
#include <stdio.h>

// ���� �˰���(Sort Algorithm): ���� [����|ū] �����͸� �������� ������� �̵�
main()
{
	//[1] Input: Data Structure(Array, List, Stack, Queue, Tree, DB, ...)
	int data[] = { 3, 2, 1, 5, 4 }; // ���ĵ��� ���� ������
	int N = sizeof(data) / sizeof(int); // �ǻ��ڵ�(�����ڵ�) ���·� �˰����� ǥ���ϱ� ����

	//[2] Process: Selection Sort(���� ����) �˰���
	for (int i = 0; i < N - 1; i++) // i = 0 to N - 1
	{
		for (int j = i + 1; j < N; j++) // j = i + 1 to N 
		{
			if (data[i] > data[j]) // �ε�ȣ ����: ��������(>), ��������(<)
			{
				int temp = data[i]; data[i] = data[j]; data[j] = temp; // SWAP
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
