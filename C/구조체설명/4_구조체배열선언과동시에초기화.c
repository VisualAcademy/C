// StructArrayInitializer.c
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
	//[1][2] ����ü �迭 ����� ���ÿ� �ʱ�ȭ
	struct Member m[] = { {"ȫ�浿", 21, 100.05}, {"��λ�", 100, 70.05}, {"�Ӳ���", 40, 150.00} };
	//[3] ����
	for (i = 0; i < 3; i++)
	{
		printf("%s, %d, %.2f\n", m[i].Name, m[i].Age, m[i].Weight);
	}
}
