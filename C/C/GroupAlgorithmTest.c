//[?] �÷��� ������ �����͸� Ư�� Ű ������ �׷�ȭ
#include <stdio.h>
#include <string.h>

// �׷� �˰���(Group Algorithm): Ư�� Ű ���� �ش��ϴ� �׷�ȭ�� �հ� ����Ʈ �����

// �׽�Ʈ�� ���ڵ� ����ü 
struct Record
{
	char	Name[10]; // ��ǰ��
	int		Quantity; // ����
};

int main(void)
{
	//[1] Input
	struct Record records[4] = {
		{"RADIO", 3},
		{"TV", 1},
		{"RADIO", 2},
		{"DVD", 4}
	}; // �Է� ������	
	struct Record groups[4] = { {"", 0}, };  // ��� ������ 
	int N = sizeof(records) / sizeof(records[0]); // �ǻ��ڵ� 

	//[2] Process: Group �˰���(SORT -> SUM -> GROUP)
	//[A] �׷� ����: SORT 
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (strcmp(records[i].Name, records[j].Name) > 0)
			{
				struct Record temp;
				temp = records[i];
				records[i] = records[j];
				records[j] = temp;
			}
		}
	}

	//[B] �׷� �Ұ�: GROUP
	int groupCount = 0; // �׷�� 
	int subtotal = 0; // �Ұ�
	for (int i = 0; i < N; i++)
	{
		subtotal += records[i].Quantity; // ���� ��ǰ���� ������ ����(SUM)
		if ((i + 1) == N || // �ܶ�(short circuiting)�̸� �Ʒ� ���� ���� 
			(strcmp(records[i].Name, records[i + 1].Name) != 0))
		{
			//[!] ���� ���ڵ尡 ���ų�, ���� ���ڵ�� ���� ���ڵ尡 �ٸ��� ����
			strcpy_s(groups[groupCount].Name, 10, records[i].Name); // �� �׷��� Ű(Key) ����
			groups[groupCount].Quantity = subtotal; // �Ұ�
			groupCount++; // �׷�� ����
			subtotal = 0; // �ϳ��� �׷��� �Ϸ�Ǹ� �Ұ� �ʱ�ȭ
		}
	}

	//[3] Output
	printf("[1] ���ĵ� ���� ������:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%6s - %d\n", records[i].Name, records[i].Quantity);
	}
	printf("[2] �̸����� �׷�ȭ�� ������:\n");
	for (int i = 0; i < groupCount; i++)
	{
		printf("%6s - %d\n", groups[i].Name, groups[i].Quantity);
	}
}
