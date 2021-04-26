// 반환값이 있는 함수(메서드)
#include <stdio.h>

int SquareFunction(int x)
{
	int r = x * x;
	return r;
}

main()
{
	printf("%d\n", SquareFunction(2)); // 4
	printf("%d\n", SquareFunction(4)); // 16
}
