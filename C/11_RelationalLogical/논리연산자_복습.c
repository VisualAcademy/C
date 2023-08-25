/*
논리 연산자 : &&(AND), ||(OR), !(NOT)
&& : 둘 다 참일 때에만 참
|| : 하나라도 참이면 참
! : 참이면 거짓, 거짓이면 참
*/
#include <stdio.h>

int main(void)
{
	int a = 3; int b = 5; int c = 0;

	c = (a == b) && (a != b);// c = 0 && 1
	printf("c : %d\n", c);//0(거짓)

	c = (a == b) || (a != b);
	printf("0 || 1 = %d\n", c);//1(참)

	c = !(a == b); // !0 -> 1
	printf("!0 = %d\n", c);//1(참)

	//system("pause");

	return 0; 
}
