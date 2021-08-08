// StructInitializer.c
// 구조체(Structure;Struct) : 하나의 이름으로 서로 다른 데이터 형식을 묶어서 관리
#include <stdio.h>

//[!] 구조체 선언: 회원 관리
struct Member
{
	char* Name;	// 이름
	int		Age;	// 나이
	double	Weight;	// 몸무게
} objMember = { "백두산", 100, 70.05 };

void main(void)
{
	//[3] 구조체(Struct) 
	printf("이름: %s, 나이: %d, 몸무게: %.2f\n",
		objMember.Name, objMember.Age, objMember.Weight); //[c] 구조체 참조
}