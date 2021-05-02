#define _CRT_SECURE_NO_WARNINGS
/*
	If문 : 조건문 : 조건이 참일때와 거짓일때 수행하는 구문을 분기
*/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// 변수 선언
	int num = 0;
	int r = 0;
	// 화면으로부터 값을 입력
	printf("숫자를 입력하시오. _\b"); 
	r = scanf("%d", &num);
	// 조건 판단 후 출력
	printf("\n입력한 수 : %d\n", num);
	//[1] 절대값 : +값은 그대로 출력, -값은 -기호를 붙여서 +로 전환해서 출력
	if (num < 0) // if문
	{
		num = -num; // 부호 전환 
	}
	printf("절대값 : %d\n", num); // 양수
	//[2] 짝수/홀수 
	if (num % 2 == 0)	// 짝수라면?
	{
		printf("%d : 짝수\n", num);	// 조건이 참일 때 실행
	}
	else
	{
		printf("%d : 홀수\n", num);	// 조건이 거짓일 때 실행
	}

	//[3] 다중 조건
	if (num % 7 == 0)
	{
		printf("%d : 7의 배수\n", num);
	}
	else if (num % 5 == 0)
	{
		printf("%d : 5의 배수\n", num);
	}
	else if (num % 3 == 0)
	{
		printf("%d : 3의 배수\n", num);
	}
	else
	{
		printf("%d : 3, 5, 7의 배수가 아닌 수\n", num);
	}

	system("pause");
}
