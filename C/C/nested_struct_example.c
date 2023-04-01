/*
	��ø ����ü : nested_struct_example.c
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
	Member objMember = { 1, "ȫ�浿", {100, 80} };

	Member* p;
	p = &objMember;

	printf("��ȣ: %d\n", objMember.Num);
	printf("�̸�: %s\n", objMember.Name);
	printf("��������: %d\n", objMember.Score.Kor);
	printf("��������: %d\n", p->Score.Eng);

	return 0;
}
