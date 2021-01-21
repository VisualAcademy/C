#include <stdio.h>

// 구조체 선언
struct member
{
	char* name;		// 이름
	int		age;		// 나이
	long	money;		// 연봉
};

void main(void)
{
	int i;

	//// 구조체 배열 선언
	//struct member objMembers[3];

	//// 구조체 배열 초기화
	//objMembers[0].name = "홍길동";
	//objMembers[0].age = 21;
	//objMembers[0].money = 1000;;

	//objMembers[1].name = "백두산";
	//objMembers[1].age = 31;
	//objMembers[1].money = 2000;;

	//objMembers[2].name = "임꺽정";
	//objMembers[2].age = 41;
	//objMembers[2].money = 3000;;

	// 구조체 배열 선언과 동시에 초기화
	struct member objMembers[] = {
		{"홍길동", 21, 1000}, {"백두산", 31, 2000}, {"임꺽정", 41, 3000}
	};

	// 출력
	for (i = 0; i < 3; i++)
	{
		printf("%8s %2d %4ld\n", objMembers[i].name, objMembers[i].age, objMembers[i].money);
	}
}
