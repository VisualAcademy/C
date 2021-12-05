// 포인터(Pointer) : 참조형
#include <stdio.h>

void main()
{
	// 값형(Value Type) 변수 : 해당 변수 이름공간에 데이터 저장
	int a;
	a = 10;
	// 포인터형(Pointer Type;Reference Type) 변수 : 
	// 다른 변수의 공간을 참조(가리키는)하는 형태
	int* p;
	p = &a;//a변수의 주소(Address)를 포인터형 변수에 기록
	// 출력
	printf("a의 값 : %d\n", a);//10
	printf("a의 주소 : %d\n", &a);//1244992

	printf("p의 값 : %d\n", p);//1244992
	printf("p가 가리키는 값 : %d", *p);//10
	printf("p의 주소 : %d\n", &p);//1244992+-???=1244980
}
