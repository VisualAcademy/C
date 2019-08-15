/*
	함수(Function;Method) :
		자주 사용하는 프로그램 조각을 하나의 이름으로 묶어서 관리(Input, Process, Output)
*/
#include <stdio.h>

//[0] 함수 원형(ProtoType) 선언
void Hello(void);
void Hi(char msg[]);
void Sum(int first, int second);
int Hap(int f, int s);

// 프로그램의 엔트리 포인트(Entry Point;시작점)
void main(void)
{
	//[0] 변수 선언 부
	int result = 0;
	//[1] 호출
	Hello(); Hello(); Hello();
	//[2] 호출
	Hi("안녕하세요."); Hi("반갑습니다.");
	Sum(3, 5);
	//[3] 호출(Call)
	result = Hap(10, 20);
	printf("넘겨온 결과값: %d\n", result);
}

//[1] 매개변수(Parameter;Argument;인자;인수)도 없고 반환값(Return Value)도 없는 함수 선언
void Hello(void)
{
	printf("안녕하세요.\n");
}
//[2] 매개변수가 있는 함수 선언
void Hi(char msg[])
{
	printf("%s\n", msg);
}
void Sum(int first, int second)
{
	printf("%d + %d = %d\n", first, second, (first + second));
}
//[3] 매개변수도 있고 반환값도 있는 함수 선언 : Input, Process, Output
int Hap(int f, int s)
{
	int r = f + s; // Process
	return r; // 반환
}
