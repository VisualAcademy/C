#include <stdio.h>

/// <summary>
/// ���� �Ա�
/// </summary>
void eatSoup()
{
	// static ������ �ڵ����� 0���� �ʱ�ȭ
	static int myAge; // ���������� ����(Shared)�Ǿ� ����

	++myAge;

	printf("����: %d\n", myAge);
}

void main()
{
	eatSoup(); eatSoup(); eatSoup();
}
