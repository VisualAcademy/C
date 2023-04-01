/*
	중첩 구조체 : nested_struct_example.c
*/
#include <stdio.h>

typedef struct Subject
{
	int Kor;
	int Eng;
} Subject;

typedef struct Member
{
	int Num;
	char Name[25];
	Subject Score;
} Member;

int main()
{
	Member objMember = { 1, "홍길동", {100, 80} };

	Member* p;
	p = &objMember;

	printf("번호: %d\n", objMember.Num);
	printf("이름: %s\n", objMember.Name);
	printf("국어점수: %d\n", objMember.Score.Kor);
	printf("영어점수: %d\n", p->Score.Eng);

	return 0;
}
