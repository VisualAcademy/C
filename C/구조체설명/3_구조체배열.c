// StructArray.c
// ����ü(Structure;Struct) : �ϳ��� �̸����� ���� �ٸ� ������ ������ ��� ����
#include <stdio.h>

//[!] ����ü ����: ȸ�� ����
struct Member
{
	char* Name;	// �̸�
	int		Age;	// ����
	double	Weight;	// ������
};

int main(void)
{
	int i, j, k;
	//[1] ����ü �迭 ����
	struct Member m[3]; // Member ������ 3���� �غ�
	//[2] �ʱ�ȭ
	m[0].Name = "ȫ�浿";
	m[0].Age = 21;
	m[0].Weight = 100.05;

	m[1].Name = "��λ�";
	m[1].Age = 100;
	m[1].Weight = 70.05;

	m[2].Name = "�Ӳ���";
	m[2].Age = 40;
	m[2].Weight = 150.05;
	//[3] ����
	for (i = 0; i < 3; i++)
	{
		printf("%s, %d, %.2f\n", m[i].Name, m[i].Age, m[i].Weight);
	}
}
