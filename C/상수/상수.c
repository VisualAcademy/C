// 상수(Constant) : 한번 선언 후 계속 사용
#include <stdio.h>

// 전처리기 지시문(Pre Processor) 
#define MY_AGE 21

main()
{
	// 변수
	int age = 21;			// 추천
	int intAge = 21;		// 헝가리언 표기법 : 접두사 붙이는 방법, iAge, dNum, fNum, txtNum, btnOK, VB, Office
	int int_age = 21;		// 파스칼 표기법 : _(언더스코어, 언더바)로 구분, 상수표현시 자주 사용, C/C++
	int myAge = 21;			// 낙타(Camel) 표기법 : 단어의 첫자를 대문자로, Java/C# => 요즘 주로 사용

	double a, b, c, d; // ???

	// 상수
	const double PI = 3.1415926545;
	myAge = 22;
	age = 100;
	//PI = 3.15; 

	printf("나이 : %d\n", age);
	printf("PI : %f\n", PI);
	printf("나이 : %d\n", MY_AGE);
}
// ~(틸드), !, @, #, $, %, ^, &, *(애스터리스크), (), -, +=, _(언더바<언더스코어), {}, [], ", ', <(꺽쇠;왼쪽), >, /, \, ? , ., |
// www.terms.co.kr => 아스키 기호 읽는 법


// 프로그램 다운로드 : 다운로드 : http://www.microsoft.com/visualstudio/kor/downloads

/*
    상수(Constant) :
        - 변하지 않는 수
        - 변수와 비슷하나, 한번 선언/초기화 후 재 초기화 불가
        - 변수 선언시 const 키워드(예약어) 붙임
*/
//#include <stdio.h>
//
//void main()
//{
//    //[0] 변수 선언 및 초기화
//    int age = 21; // 나이
//    // 상수 선언 및 초기화 : 반드시 초기화
//    const double MY_MONEY = 100000000; // 연봉
//    const double PI = 3.1415926545; // 변하지 않는 값 
//
//    // 변수는 재 할당 가능
//    age = 22;
//    // 상수는 재 할당 불가 : 에러 
//    // MY_MONEY = 200000000;
//    printf("%f\n", PI);
//
//    //[!] 변수를 코드 하단에 선언?
//    // int kor = 100; 
//}


///*
//	2.2. 예제. 상수(Constant) : 변하지 않는 변수
//									(읽기전용 변수)
//*/
//#include <stdio.h>
////[!] 상수 선언
//#define MY_AGE 21
//
//void main(void)
//{
//	//변수 선언과 동시에 초기화
//	int intAge = 21;
//	//[1] 상수 선언 : const 키워드 붙임
//	const double PI = 3.141592654;
//	//변수 참조
//	printf("제 나이 : [%-5d]입니다.\n"
//		, intAge);
//	//[2] 상수 참조
//	printf("파이 : [  %-15.10f  ]\n", PI);
//	//[!] 상수 출력
//	printf("나이 : %d\n", MY_AGE);
//	//변수 내용 변경
//	intAge = 25;
//	printf("변경된 제 나이 : %d입니다.\n"
//		, intAge);
//	//[3] 상수 내용을 변경
//	//PI = 3.15;//에러 발생(상수 변경 불가)
//}
