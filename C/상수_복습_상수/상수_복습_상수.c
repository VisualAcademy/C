/*
	2.2. 예제. 상수(Constant) : 변하지 않는 변수
									(읽기전용 변수)
*/
#include <stdio.h>
//[!] 상수 선언
#define MY_AGE 21

void main(void)
{
	//변수 선언과 동시에 초기화
	int intAge = 21;
	//[1] 상수 선언 : const 키워드 붙임
	const double PI = 3.141592654;
	//변수 참조
	printf("제 나이 : [%-5d]입니다.\n"
		, intAge);
	//[2] 상수 참조
	printf("파이 : [  %-15.10f  ]\n", PI);
	//[!] 상수 출력
	printf("나이 : %d\n", MY_AGE);
	//변수 내용 변경
	intAge = 25;
	printf("변경된 제 나이 : %d입니다.\n"
		, intAge);
	//[3] 상수 내용을 변경
	//PI = 3.15;//에러 발생(상수 변경 불가)
}


// 상수2.c
///*
//	상수(Constant) :
//		- 변하지 않는 수
//		- 변수와 비슷하나, 한번 선언/초기화 후 재 초기화 불가
//		- 변수 선언시 const 키워드(예약어) 붙임
//*/
//#include <stdio.h>
//
//void main()
//{
//	//[0] 변수 선언 및 초기화
//	int age = 21; // 나이
//	// 상수 선언 및 초기화 : 반드시 초기화
//	const double MY_MONEY = 100000000; // 연봉
//	const double PI = 3.1415926545; // 변하지 않는 값 
//
//	// 변수는 재 할당 가능
//	age = 22;
//	// 상수는 재 할당 불가 : 에러 
//	// MY_MONEY = 200000000;
//	printf("%f\n", PI);
//
//	//[!] 변수를 코드 하단에 선언?
//	// int kor = 100; 
//}
