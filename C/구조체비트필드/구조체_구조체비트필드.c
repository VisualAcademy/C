#include <stdio.h>
// 멤버(필드)의 데이터 저장 범위
// i : 0~255
// j : 0~3
struct A {
	int i;
	int j;
};
// 구조체 비트필드를 적용한 구조체.
struct B {
	int i : 8;//2^8=256
	int j : 4;//2^4=8
};
void main() {
	struct A a; struct B b;
	a.i = 100; a.j = 3; b.i = 100; b.j = 3;
	printf("%d %d\n", a.i, a.j);
	printf("%d\n", sizeof(a));//8Byte
	printf("%d %d\n", b.i, b.j);
	printf("%d\n", sizeof(b));//4Byte

	system("pause");
}
