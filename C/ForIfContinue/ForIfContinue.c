// �ݺ������� continue ���� ����Ͽ� ���� �ݺ����� �̵��ϱ�
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		if (i % 2 == 0)
		{
			continue; // ¦�� �ǳʶٱ�
		}
		printf("%d\n", i);
	}

	return 0;
}
