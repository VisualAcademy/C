#include <stdio.h>

struct member
{
	char* name;		// �̸�
	int		age;		// ����
	long	money;		// ����
};

int main(void)
{
	int i = 0;

	// ����ü �� �迭 ����� ���ÿ� �ʱ�ȭ
	struct member members[] = {
		{"ȫ�浿", 21, 1000},
		{"��λ�", 31, 2000},
		{"�Ӳ���", 41, 3000}
	};

	// ����ü ������ ���� ����
	struct member* pMembers;

	// ����ü �迭�� ���� �ּҸ� ����ü �����Ϳ� ����
	pMembers = members;

	// ����ü �����͸� ���� ������ ���
	for (i = 0; i < 3; i++)
	{
		printf("%6s %2d %4ld\n", pMembers->name, pMembers->age, pMembers->money);
		pMembers++; // ������ ������ ���ؼ� �ּҸ� �������� �̵�
	}
}
