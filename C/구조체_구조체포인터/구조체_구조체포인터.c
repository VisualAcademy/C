#include <stdio.h>

struct member
{
	char* name;		// 이름
	int		age;		// 나이
	long	money;		// 연봉
};

int main(void)
{
	int i = 0;

	// 구조체 형 배열 선언과 동시에 초기화
	struct member members[] = {
		{"홍길동", 21, 1000},
		{"백두산", 31, 2000},
		{"임꺽정", 41, 3000}
	};

	// 구조체 포인터 변수 선언
	struct member* pMembers;

	// 구조체 배열의 시작 주소를 구조체 포인터에 저장
	pMembers = members;

	// 구조체 포인터를 통한 데이터 출력
	for (i = 0; i < 3; i++)
	{
		printf("%6s %2d %4ld\n", pMembers->name, pMembers->age, pMembers->money);
		pMembers++; // 포인터 연산을 통해서 주소를 다음으로 이동
	}
}
