// ������μ�.exe 1 100 => 1���� 100���� ����� ��(3 || 4)
// ������μ�.exe 100 1000 => 100���� 1000���� ����� ��(3 || 4)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i = 0;
	int sum = 0;

	int first = atoi(argv[1]);	// 1
	int second = atoi(argv[2]); // 100

	for (i = first; i <= second; i++)
	{
		if (i % 3 == 0 || i % 4 == 0)
		{
			sum += i;
		}
	}

	printf("����� �� : %d\n", sum);

	return 0;
}
