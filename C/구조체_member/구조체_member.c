// 구조체 : 서로 다른 데이터형식을 하나의 이름으로 묶어서 관리
#include <stdio.h>

// 구조체 선언 : 새로운 데이터 형식인 member 형을 선언
struct member
{
	char* name;		// 이름
	int		age;		// 나이
	long	money;		// 연봉
};

int main(void)
{
	// 구조체 형 변수 선언 : 개체의 인스턴스 생성(C#/C++)
	struct member m;

	// 구조체의 각각의 멤버를 초기화
	m.name = "박용준";
	m.age = 21;
	m.money = 2100000000; // 21억

	// 구조체 참조
	printf("이름 : %s, 나이 : %d, 연봉 : %ld원\n", m.name, m.age, m.money);
}
