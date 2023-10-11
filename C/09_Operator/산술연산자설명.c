// 산술연산자 : +, -, *, /, %
#include <stdio.h>

// 메인 함수 = f(x)
// 메인 함수 시작
int main(void)
{
	int i = 10;
	int j = 5;
	int k;

	k = i + j;
	printf("%d\n", k); // 15

	k = i - j;
	printf("%d\n", k); // 5

	k = i * j;
	printf("%d\n", k); // 50

	k = i / j;
	printf("%d\n", k); // 2

	k = i % j;
	printf("%d\n", k); // 0

	return 0; 
}
