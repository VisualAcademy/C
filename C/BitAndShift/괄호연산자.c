#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e;

	a = 2.5 * 5 / 2.0;
	b = 2.5 * (5 / 2.0);	// () : ��ȣ ������ : �켱���� ����
	c = 5 / 2;				// 5 / 2 = 2
	d = 5 / (float)2;		// () : ��ȯ(ĳ����) ������
	e = 5 / 2.0;

	printf("2.5 * 5 / 2 = %f\n", a);
	printf("2.5 * (5 / 2) = %f\n", b);
	printf(" %f \n", c); // 2
	printf(" %f \n", d); // 2.5
	printf(" %f \n", e); // 2.5

	system("pause");

	return 0;
}
