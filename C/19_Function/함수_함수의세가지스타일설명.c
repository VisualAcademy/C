#include <stdio.h>

void Hi(void) { printf("안녕\n"); }
void Hello(char c) { printf("넘겨져 온 값 : %c\n", c); }
int Hap(int a, int b)
{
	int c = a + b;
	return c;
}
void main() {
	//[0] 내장 함수(BuiltIn Function) : 이미 만들어져 있는 기능
	printf("안녕\n");
	//[!] 사용자 정의 함수(User Defined Function)
	//[1] 매개변수도 없도 반환값도 없는 함수
	Hi(); Hi();
	//[2] 매개변수(Parameter)가 있는 함수
	Hello('A'); Hello('B');
	//[3] 반환값(Return Value)이 있는 함수
	printf("%d\n", Hap(3, 5));
}
