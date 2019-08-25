//[?] 2���� ���� �迭 ��ġ��: ��, 2���� �迭�� ������������ ���ĵǾ� �ִٰ� ����
#include <stdio.h>

// ���� �˰���(Merge Algorithm): ������������ ���ĵǾ� �ִ� ���� �迭�� �ϳ��� ����
main()
{
	//[1] Input
	int first[] = { 1, 3, 5 }; // �������� ���ĵ�
	int second[] = { 2, 4 }; // �������� ���ĵ�
	int M = sizeof(first) / sizeof(int); 
	int N = sizeof(second) / sizeof(int); // M:N ����
	//int merge[M + N] = { 0, }; // ���յ� �迭�� ���� �׸�
	int* merge = malloc((M + N) * sizeof(int)); // ���յ� �迭�� ���� �׸�
	int i = 0; int j = 0; int k = 0; // i, j, k ����

	//[2] Process: MERGE 
	while (i < M && j < N) // �� �� �ϳ��� �迭�� ���� ������ ������
	{
		if (first[i] < second[j]) // �� ���� ���� merge �迭�� ����
		{
			merge[k++] = first[i++];
		}
		else
		{
			merge[k++] = second[j++];
		}
	}
	while (i < M) // ù ��° �迭�� ������ ������ ������ 
	{
		merge[k++] = first[i++];
	}
	while (j < N) // �� ��° �迭�� ������ ������ ������ 
	{
		merge[k++] = second[j++];
	}

	//[3] Output
	for (int i = 0; i < M + N; i++)
	{
		printf("%d\t", merge[i]);
	}
	printf("\n");

	//[4] Dispose
	free(merge);
}
