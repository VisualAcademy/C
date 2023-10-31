// 비트 연산자: AND(&), OR(|), XOR(^), NOT(~) 
#include <stdio.h>

int main(void)
{
	int x = 12; // 1100
	int y = 10; // 1010

	int a = x & y; // 1000 -> 8
	int o = x | y; // 1110 -> 14
	int e = x ^ y; // 0110 -> 6
	int n = ~x;	   // 11111111...11110011 -> -13

	printf("a: %d\n", a);
	printf("o: %d\n", o);
	printf("e: %d\n", e);
	printf("n: %d\n", n);

	getchar();

	return 0; 
}
