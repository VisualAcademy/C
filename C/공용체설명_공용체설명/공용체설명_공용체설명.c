#include <stdio.h>
// ����ü
struct S {
	char a;//1Byte
	int b;//4Byte : 1+4 = 5Byte -> 8Byte
};
// ����ü
union U {
	char a;//1Byte
	int b;//4Byte : ����߿��� ���� ū ���������Ŀ� �°� �޸��Ҵ�
};
void main() {
	union U u;
	u.a = 'A';
	printf("%c\n", u.a);
	u.b = 1234;
	printf("%d\n", u.b);
	printf("%d\n", sizeof(u));//5->8, 5->4
}
