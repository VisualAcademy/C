// auto_scope.c
/*
	9.1.1. 예제. 자동변수의 선언과 참조 : 기억클래스_자동변수의선언.c
*/
#include <stdio.h>

void sub(int num)
{
	printf("%d\n", num);
}

int main(void)
{
	auto int num = 10;
	{
		auto int num = 12;
		printf("%d\n", num); // 12
		{
			auto int num = 21;
			printf("%d\n", num); // 21
			sub(num); // 21
		}
	}
	sub(num); // 10

	return 0;
}
