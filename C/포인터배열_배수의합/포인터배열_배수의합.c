#include <stdio.h>

void main(void)
{
	int data[] = { 3, 2, 1, 4, 5 };
	int sum = 0;
	int* p;
	int i;

	p = data; // 배열의 시작 주소를 포인터에 기록

	// 데이터를 반복 : 포인터 변수를 통해서 반복
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
	{
		if (*(p + i) % 2 == 0)
		{
			sum += *(p + i);
		}
	}

	printf("짝수의 합 : %d\n", sum);
}
