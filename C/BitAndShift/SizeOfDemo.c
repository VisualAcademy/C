//[?] sizeof 연산자로 데이터 형식의 크기 구하기
#include <stdio.h>

int main()
{
	char c = 'A';
	int i = 1234;
	long l = 12345;
	float f = 3.14f;
	double d = 3.14;

	printf("%zu byte\n", sizeof(c)); // sizeof는 size_t 형을 반환하므로, %zu를 사용해야 합니다.
	printf("%zu byte\n", sizeof(i));
	printf("%zu byte\n", sizeof(l));
	printf("%zu byte\n", sizeof(f));
	printf("%zu byte\n", sizeof(d));

	return 0;
}
