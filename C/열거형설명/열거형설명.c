// ������(Enumeration;Enum): �����ϴ�. �����ϴ�.
#include <stdio.h>

//// ����Ű�� ��� ����
//enum Direction
//{
//	Top,		// 0
//	Bottom, 	// 1
//	Left, 		// 2
//	Right		// 3
//};

// ����
enum
{
	Sun, Mon, Tue, Wed, Thr, Fri, Sat
};

// ���� ��Ʈ�� Ű ����
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
