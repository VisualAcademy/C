/*
���Կ����� : =, +=, -=, *=, /=, %=
*/
#include <stdio.h>

int main(void)
{
	int a, b, c;

	a = 10; // a�� 10�� ����
	printf("%d\n", a);//10

	a = 10 + 5; // a�� 10 + 5�� ����
	printf("%d\n", a);//15

	a = a + 5; // 15 + 5
	printf("%d\n", a);//20

	a += 5; // a = a + 5�� ������ �ڵ带 ����
	printf("%d\n", a);//25

	//b = 2; a = b;
	a = b = 2; // ���� 
	printf("%d\n", a);

	c = (b = 3, a = 8, a * b);
	printf("%d \n", c);

	system("pause");
}
