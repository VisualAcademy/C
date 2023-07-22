// static_shared.c
/*
	9.1.2. 예제. 정적 변수의 사용: 기억클래스_정적변수사용.c
*/
#include <stdio.h>

void func1(void);
void func2(void);

static int num = 200; // 모든 함수에서 공유(Shared)해서 사용 가능한 정적 변수 

int main(void)
{
	auto int num = 1234; // 지역 변수 num
	func1(); // 210
	func2(); // 20
	printf("main.num -> %d\n", num); // 1234

	return 0;
}

void func1(void)
{
	num += 10; // 공유 변수 num 
	printf("num -> %d\n", num); // 210
}

void func2(void)
{
	auto int num = 20; // 지역 변수 num
	printf("func2.num -> %d\n", num); // 20
}
