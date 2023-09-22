// StructArrayInitializer.c
// 구조체(Structure;Struct) : 하나의 이름으로 서로 다른 데이터 형식을 묶어서 관리
#include <stdio.h>

//[!] 구조체 선언: 회원 관리
struct Member
{
	char* Name;	// 이름
	int		Age;	// 나이
	double	Weight;	// 몸무게
};

int main(void)
{
	int i, j, k;
	//[1][2] 구조체 배열 선언과 동시에 초기화
	struct Member m[] = { {"홍길동", 21, 100.05}, {"백두산", 100, 70.05}, {"임꺽정", 40, 150.00} };
	//[3] 참조
	for (i = 0; i < 3; i++)
	{
		printf("%s, %d, %.2f\n", m[i].Name, m[i].Age, m[i].Weight);
	}
}
