#include <stdio.h>

// ����ü ����
struct member
{
	char* name;		// �̸�
	int		age;		// ����
	long	money;		// ����
};

void main(void)
{
	int i;

	//// ����ü �迭 ����
	//struct member objMembers[3];

	//// ����ü �迭 �ʱ�ȭ
	//objMembers[0].name = "ȫ�浿";
	//objMembers[0].age = 21;
	//objMembers[0].money = 1000;;

	//objMembers[1].name = "��λ�";
	//objMembers[1].age = 31;
	//objMembers[1].money = 2000;;

	//objMembers[2].name = "�Ӳ���";
	//objMembers[2].age = 41;
	//objMembers[2].money = 3000;;

	// ����ü �迭 ����� ���ÿ� �ʱ�ȭ
	struct member objMembers[] = {
		{"ȫ�浿", 21, 1000}, {"��λ�", 31, 2000}, {"�Ӳ���", 41, 3000}
	};

	// ���
	for (i = 0; i < 3; i++)
	{
		printf("%8s %2d %4ld\n", objMembers[i].name, objMembers[i].age, objMembers[i].money);
	}
}
