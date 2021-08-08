// StructDescription.c
// 구조체(Structure;Struct) : 하나의 이름으로 서로 다른 데이터 형식을 묶어서 관리
#include <stdio.h>

//[!] 구조체 선언: 회원 관리
struct Member
{
	char* Name;	// 이름
	int		Age;	// 나이
	double	Weight;	// 몸무게
};

void main(void)
{
	//[1] 변수(Variable): 하나의 이름으로 하나의 데이터 형식을 하나만 보관해 놓는 그릇
	int num = 10;

	//[2] 배열(Array): 하나의 이름으로 동일한 데이터 형식을 하나 이상 보관
	int data[5] = { 10, 20, 30, 40, 50 };

	//[3] 구조체(Struct) 
	struct Member objMember;	//[a] 구조체 형식의 변수 선언
	objMember.Name = "홍길동";	//[b] 구조체 각각의 멤버 변수(Member)를 초기화
	objMember.Age = 21;
	objMember.Weight = 100.05;
	printf("이름: %s, 나이: %d, 몸무게: %.2f\n",
		objMember.Name, objMember.Age, objMember.Weight); //[c] 구조체 참조
}
