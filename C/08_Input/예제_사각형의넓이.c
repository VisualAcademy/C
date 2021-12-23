// 예제_사각형의넓이.c
#include <stdio.h>

void main(void)
{
	//변수 선언
	float fltWidth, fltHeight;
	float fltResult;
	//변수 초기화
	fltWidth = 0.0;
	fltHeight = 0.0;
	fltResult = 0.0;
	//사용자로부터 데이터 입력
	printf("가로 길이 : ");
	scanf("%f", &fltWidth);
	printf("세로 길이 : ");
	scanf("%f", &fltHeight);
	//처리 : 넓이 구하기
	fltResult = fltWidth * fltHeight;
	//출력
	printf("\n주어진 사각형의 넓이 : %f\n", fltResult);
}
