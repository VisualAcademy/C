/*
	9.1.4. 예제. 외부 변수(Extern) 사용 : 기억클래스_외부변수.c
*/
#include <stdio.h>

int x, y;

sb1()
{
	printf("서브 1 : x = %d\n", x++);
}

sb2()
{
	printf("서브 2 : x = %d\n", y++);
}

main()
{
	x = 10;
	y = 20;
	sb1();
	sb2();
	sb3();
	sb4();
}
