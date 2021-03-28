#include <stdio.h>
// 구조체
struct S {
	char a;//1Byte
	int b;//4Byte : 1+4 = 5Byte -> 8Byte
};
// 공용체
union U {
	char a;//1Byte
	int b;//4Byte : 멤버중에서 가장 큰 데이터형식에 맞게 메모리할당
};
void main() {
	union U u;
	u.a = 'A';
	printf("%c\n", u.a);
	u.b = 1234;
	printf("%d\n", u.b);
	printf("%d\n", sizeof(u));//5->8, 5->4
}
