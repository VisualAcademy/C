// static_shared.c
/*
	9.1.2. ����. ���� ������ ���: ���Ŭ����_�����������.c
*/
#include <stdio.h>

void func1(void);
void func2(void);

static int num = 200; // ��� �Լ����� ����(Shared)�ؼ� ��� ������ ���� ���� 

int main(void)
{
	auto int num = 1234; // ���� ���� num
	func1(); // 210
	func2(); // 20
	printf("main.num -> %d\n", num); // 1234

	return 0;
}

void func1(void)
{
	num += 10; // ���� ���� num 
	printf("num -> %d\n", num); // 210
}

void func2(void)
{
	auto int num = 20; // ���� ���� num
	printf("func2.num -> %d\n", num); // 20
}
