//[?] sizeof 연산자로 데이터 형식의 크기 구하기
#include <stdio.h>

main()
{
	char c = 'A';
	int i = 1234; 
	long l = 12345;
	float f = 3.14f;
	double d = 3.14;

	printf("%d byte\n", sizeof(c)); // 1 byte
	printf("%d byte\n", sizeof(i)); // 4 byte
	printf("%d byte\n", sizeof(l)); // 4 byte
	printf("%d byte\n", sizeof(f)); // 4 byte
	printf("%d byte\n", sizeof(d)); // 8 byte
}
