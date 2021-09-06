#include <stdio.h>

struct StructType
{
	char a;
	char b;
	char c;
};

union UnionType
{
	char a;
	char b;
	char c;
};

int main(void)
{
	struct StructType st;
	union UnionType ut;

	st.a = 'A'; st.b = 'B'; st.c = 'C';

	ut.a = 'A'; printf("%c\n", ut.a);
	ut.c = 'B'; printf("%c\n", ut.b);
	ut.c = 'C'; printf("%c\n", ut.c);

	printf("����ü StructType�� �ν��Ͻ��� ������ : %d\n", sizeof(st));
	printf("����ü UnionType�� �ν��Ͻ��� ������ : %d\n", sizeof(ut));
}
