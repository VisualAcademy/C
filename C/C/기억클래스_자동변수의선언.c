// auto_scope.c
/*
	9.1.1. ����. �ڵ������� ����� ���� : ���Ŭ����_�ڵ������Ǽ���.c
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
