/*
	����ü�� ����� ȸ�� ���� : member_info_struct.c
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
	objMember.birth = "050527";
	objMember.tel = "114";

	// ����ü ����
	printf("�̸�: %s\n", objMember.name);
	printf("�ּ�: %s\n", objMember.addr);
	printf("�������: %s\n", objMember.birth);
	printf("��ȭ��ȣ: %s\n", objMember.tel);

	return 0;
}