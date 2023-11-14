/*
	반올림, 올림, 내림
*/
#include <stdio.h>

int main(void)
{
	double dblTemp = 0.0;//임시변수
	double dblNum = 3.777;

	printf("기본 : %f\n"
		, dblNum);//3.777000
	printf("정수형 변환 : %d\n"
		, (int)dblNum);//3
	dblTemp = //1자리 반올림
		(int)(dblNum + 0.5);
	printf("소수점 1자리 반올림 : %.3f\n"
		, dblTemp);//4.0
	dblTemp = //2자리 반올림 : 3.777->3.8
		(int)((dblNum + 0.05) * 10) / 10.0;
	printf("소수점 2자리 반올림 : %.3f\n"
		, dblTemp);//3.8
	dblTemp = //3자리 반올림 : 3.777->3.78
		(int)((dblNum + 0.005) * 100) / 100.0;
	printf("소수점 3자리 반올림 : %.3f\n"
		, dblTemp);//3.78
	dblTemp = //2자리에서 올림 : 3.777->3.80
		(int)((dblNum + 0.09) * 10) / 10.0;
	printf("소수점 2자리 올림 : %.3f\n"
		, dblTemp);//3.80
	dblTemp = //2자리에서 내림 : 3.777->3.70
		(int)(dblNum * 10) / 10.0;
	printf("소수점 2자리 내림 : %.3f\n"
		, dblTemp);//3.70
}

