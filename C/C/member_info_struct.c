/*
	구조체를 사용한 회원 정보 : member_info_struct.c
*/
#include <stdio.h>

// 구조체 선언
typedef struct member
{
	char* name;
	char* addr;
	char* birth;
	char* tel;
} Member;

int main()
{
	// 구조체 형 변수 선언
	Member objMember;

	// 구조체 초기화
	objMember.name = "지호";
	objMember.addr = "서울";
	objMember.birth = "050527";
	objMember.tel = "114";

	// 구조체 참조
	printf("이름: %s\n", objMember.name);
	printf("주소: %s\n", objMember.addr);
	printf("생년월일: %s\n", objMember.birth);
	printf("전화번호: %s\n", objMember.tel);

	return 0;
}