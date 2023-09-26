// 열거형(Enumeration;Enum): 열거하다. 나열하다.
#include <stdio.h>

//// 방향키를 묶어서 관리
//enum Direction
//{
//	Top,		// 0
//	Bottom, 	// 1
//	Left, 		// 2
//	Right		// 3
//};

// 요일
enum
{
	Sun, Mon, Tue, Wed, Thr, Fri, Sat
};

// 게임 컨트롤 키 관리
enum ControlKey
{
	Up = 72,
	Down = 80,
	Left = 75,
	Right = 77
};

int main(void)
{
	//printf("%d\n", Top);	
	//printf("%d\n", Bottom);	
	//printf("%d\n", Left);	
	//printf("%d\n", Right);	

	printf("%d\n", Wed); // 3

	printf("%d %d %d %d\n", Up, Down, Left, Right);
}


////열거형(Enumeration) : 기억하기 어려운 상수(정수)를 기억하기
////쉬운 문자 상수로 대체
//#include <stdio.h>
//
////[2] 열거형
//enum Direction
//{
//	TOP,		//0 
//	BOTTOM,		//1
//	LEFT = 10,	//10
//	RIGHT		//11
//};
//
////[3] 전처리기 지시문 : 매크로 상수
//#define PI 3.141592
//
//void main()
//{
//	//[1] 상수
//	const int N = 100;
//
//	//[!] 출력
//	printf("N : %d, RIGHT : %d, PI : %.6f\n", N, RIGHT, PI);
//}
