/*
�񱳿����� :
== : ������? ������ ��(1;true), �׷��� ������ ����
!= : �ٸ���? �ٸ��� ��, �׷��� ������ ����(0;false)
A < B : A�� B���� ������?
A <= B : �۰ų� ������?
A > B : ū��?
A >= B : ũ�ų� ������?
*/
#include <stdio.h>

void main()
{
	int a = 5, b = 3;

	int c = (a == b); // a�� b�� ������? -> VB Family : =
	int d = (a != b); // a�� b�� �ٸ���? -> VB Family : <>

	printf("c : %d\n", c); // 0(false)
	printf("d : %d\n", d); // 1(true)

	system("pause");
}
