/*
	예제. 공용체 사용: 공용체사용.c
*/
#include <stdio.h>

union member
{
	char* name;		// 이름
	int age;		// 나이
	long incom;		// 수입
};

main()
{
	union member objMember;

	objMember.name = "레드플러스";
	printf("이름: %s\n", objMember.name);

	objMember.age = 21;
	printf("나이: %d\n", objMember.age);

	objMember.incom = 100000000;
	printf("연봉: %ld\n", objMember.incom);
}
