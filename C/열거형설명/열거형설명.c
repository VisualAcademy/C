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

void main(void)
{
	//printf("%d\n", Top);	
	//printf("%d\n", Bottom);	
	//printf("%d\n", Left);	
	//printf("%d\n", Right);	

	printf("%d\n", Wed); // 3

	printf("%d %d %d %d\n", Up, Down, Left, Right);
}
