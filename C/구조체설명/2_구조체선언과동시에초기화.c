// StructInitializer.c
// ����ü(Structure;Struct) : �ϳ��� �̸����� ���� �ٸ� ������ ������ ��� ����
#include <stdio.h>

//[!] ����ü ����: ȸ�� ����
struct Member
{
	char* Name;	// �̸�
	int		Age;	// ����
	double	Weight;	// ������
} objMember = { "��λ�", 100, 70.05 };

void main(void)
{
	//[3] ����ü(Struct) 
	printf("�̸�: %s, ����: %d, ������: %.2f\n",
		objMember.Name, objMember.Age, objMember.Weight); //[c] ����ü ����
}