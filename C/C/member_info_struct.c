/*
	8.1.1. ����. ����ü�� ����� ȸ�� ���� : ����ü.c
*/
#include <stdio.h>

// ����ü ����
typedef struct member
{
	char* name;
	char* addr;
	char* birth;
	char* tel;
} Member;

int main()
{
	// ����ü �� ���� ����
	Member objMember;

	// ����ü �ʱ�ȭ
	objMember.name = "��ȣ";
	objMember.addr = "����";
	objMember.birth = "050505";
	objMember.tel = "114";

	//clrscr();

	// ����ü ����
	printf("�̸�: %s\n", objMember.name);
	printf("�ּ�: %s\n", objMember.addr);
	printf("�������: %s\n", objMember.birth);
	printf("��ȭ��ȣ: %s\n", objMember.tel);

	return 0;
}
