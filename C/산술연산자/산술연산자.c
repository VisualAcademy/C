/*
���������(Arithmetic Operator) : +, -, *, /, %(Mod;������)
*/
#include <stdio.h>		// ��ó���� ���ù�(PreProcessor Directive)
#include <stdlib.h>

void main(void)			// main �Լ�(�޼���) : Entry Point(������)
{
	//[1] Input(�Է�)
	int a = 10;
	int b = 3;
	int r = 0;
	//[2] Process(ó��)
	r = a + b;
	//[3] Output(���)
	printf("%d + %d = %2d\n", a, b, r);
	printf("%d - %d = %2d\n", a, b, (a - b));
	printf("%d * %d = %2d\n", a, b, (a * b));
	printf("%d / %d = %2d\n", a, b, (a / b));
	printf("%d %% %d = %2d\n", a, b, (a % b)); // a / b = ��(3), ������(%;1)

	system("pause");
}
