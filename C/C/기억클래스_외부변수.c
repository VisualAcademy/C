/*
	9.1.4. ����. �ܺ� ����(Extern) ��� : ���Ŭ����_�ܺκ���.c
*/
#include <stdio.h>

int x, y;

sb1()
{
	printf("���� 1 : x = %d\n", x++);
}

sb2()
{
	printf("���� 2 : x = %d\n", y++);
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
