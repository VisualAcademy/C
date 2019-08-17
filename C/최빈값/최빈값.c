/*
	�ֺ�(MODE) �˰��� : �־��� ���ǳ����� ���� ���� ��Ÿ���� ��
	���� ī��Ʈ(COUNT)�� �ִ밪(MAX)
*/
#include <stdio.h>
#include <math.h>
#include <limits.h>	//INT_MAX

#define N 10

void main(void)
{
	//[1] Init/Input
	//���� ������
	int intData[N] = { 1, 4, 5, 4, 7, 10, 10, 7, 8, 10 };
	int intMode[N + 1] = { 0, }; //0���� 10���� : N = 11
	int i = 0;
	int intMax = 0;
	int intIndex = 0;

	//[2] Process
	//[a] Index -> Count
	for (i = 0; i < N; i++)
	{
		intMode[intData[i]] = intMode[intData[i]] + 1;
	}

	for (i = 0; i <= N; i++)
	{
		printf("%d ", intMode[i]);
	}

	//[b] Count -> Max
	intMax = intMode[0];
	for (i = 0; i < N; i++)
	{
		if (intMode[intData[i]] > intMax)
		{
			intMax = intMode[intData[i]];
			intIndex = intData[i];
		}
	}

	//[3] Output
	printf("%d��(��) %d�� ��Ÿ��.\n", intIndex, intMax);
}
