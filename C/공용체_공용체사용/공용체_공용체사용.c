/*
	����. ����ü ���: ����ü���.c
*/
#include <stdio.h>

union member
{
	char* name;		// �̸�
	int age;		// ����
	long incom;		// ����
};

main()
{
	union member objMember;

	objMember.name = "�����÷���";
	printf("�̸�: %s\n", objMember.name);

	objMember.age = 21;
	printf("����: %d\n", objMember.age);

	objMember.incom = 100000000;
	printf("����: %ld\n", objMember.incom);
}
