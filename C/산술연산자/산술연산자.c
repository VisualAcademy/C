/*
산술연산자(Arithmetic Operator) : +, -, *, /, %(Mod;나머지)
*/
#include <stdio.h>		// 전처리기 지시문(PreProcessor Directive)
#include <stdlib.h>

void main(void)			// main 함수(메서드) : Entry Point(진입점)
{
	//[1] Input(입력)
	int a = 10;
	int b = 3;
	int r = 0;
	//[2] Process(처리)
	r = a + b;
	//[3] Output(출력)
	printf("%d + %d = %2d\n", a, b, r);
	printf("%d - %d = %2d\n", a, b, (a - b));
	printf("%d * %d = %2d\n", a, b, (a * b));
	printf("%d / %d = %2d\n", a, b, (a / b));
	printf("%d %% %d = %2d\n", a, b, (a % b)); // a / b = 몫(3), 나머지(%;1)

	system("pause");
}
