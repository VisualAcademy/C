//[?] sizeof �����ڷ� ������ ������ ũ�� ���ϱ�
#include <stdio.h>

int main()
{
	char c = 'A';
	int i = 1234;
	long l = 12345;
	float f = 3.14f;
	double d = 3.14;

	printf("%zu byte\n", sizeof(c)); // sizeof�� size_t ���� ��ȯ�ϹǷ�, %zu�� ����ؾ� �մϴ�.
	printf("%zu byte\n", sizeof(i));
	printf("%zu byte\n", sizeof(l));
	printf("%zu byte\n", sizeof(f));
	printf("%zu byte\n", sizeof(d));

	return 0;
}
