// 
#include <stdio.h>

// 함수의 프로토타입(원형)
int Seung(int a, int b);

void main()
{
	int result = Seung(2, 10); // 2 ^ 10 = 1024
	printf("2의 10승 : %d\n", result);
}

// 함수의 실제 내용
int Seung(int a, int b)
{
	int c = 1;
	int i = 0;
	for (i = 0; i < b; i++)
	{
		c *= a;
	}
	return c;
}
