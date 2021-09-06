#include <stdio.h>
//[3] 매크로 상수
#define PI 3.141592
//[4] 매크로 함수
#define MAX(a, b) ( (a > b) ? a : b )
//[5] 조건부 컴파일
#define DEBUG 1
int main(void)
{
	//[1] 변수
	int a;
	//[2] 상수
	const int B = 20;
	a = 10;
	//B = 30;
	printf("a  = %d\n", a);
	printf("B  = %d\n", B);
	printf("PI  = %f\n", PI);
	printf("MAX(3, 5) = %d\n", MAX(7, 5));
#ifdef DEBUG
	printf("개발중입니다.\n");
#else
	printf("개발완료되었습니다.\n");
#endif
}