// ����ü : ���� �ٸ� ������������ �ϳ��� �̸����� ��� ����
#include <stdio.h>

// ����ü ���� : ���ο� ������ ������ member ���� ����
struct member
{
	char* name;		// �̸�
	int		age;		// ����
	long	money;		// ����
};

int main(void)
{
	// ����ü �� ���� ���� : ��ü�� �ν��Ͻ� ����(C#/C++)
	struct member m;

	// ����ü�� ������ ����� �ʱ�ȭ
	m.name = "�ڿ���";
	m.age = 21;
	m.money = 2100000000; // 21��

	// ����ü ����
	printf("�̸� : %s, ���� : %d, ���� : %ld��\n", m.name, m.age, m.money);
}
