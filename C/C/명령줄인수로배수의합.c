// 명령줄인수.exe 1 100 => 1부터 100까지 배수의 합(3 || 4)
// 명령줄인수.exe 100 1000 => 100부터 1000까지 배수의 합(3 || 4)
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

	printf("배수의 합 : %d\n", sum);

	return 0;
}
