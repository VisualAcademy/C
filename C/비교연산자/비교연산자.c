/*
�� ������ :
== : ������? ������ ��(1;true), �ٸ��� ����(0;false)
!= : �ٸ���? �ٸ��� ��(1;true), ������ ����(0;false)
<  : �۴�.
<= : �۰ų� ����.
>  : ũ��.
>= : ũ�ų� ����.
*/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 5;
	int b = 3;
	int c = 0;

	c = (a == b); // a�� b�� ������? ������ ��(1;true), �ٸ��� ����(0;false)
	printf("%d\n", c); // 0

	c = (a != b); // a�� b�� �ٸ���? 
	printf("%d\n", c); // 1

	printf("%d\n", (a < b));	// 0
	printf("%d\n", (a <= b));	// 0
	printf("%d\n", (a > b));	// 1
	printf("%d\n", (a >= b));	// 1

	system("pause");
}
