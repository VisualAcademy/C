//[!] 상수(Constant): 변하지 않는 변수, 읽기 전용 변수
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	//[1] 상수 선언과 동시에 초기화
	const double PI = 3.14;

	//[2] 상수 참조
	printf("%.2f\n", PI); // 3.14

	system("pause");
}
