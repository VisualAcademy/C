// goto��: ������ ���̺�(å����)�� �̵��ϴ� ����
#include <stdio.h>

int main()
{
	int chapter = 0;

	printf("����\n");

Start:
	printf("0, 1, 2 �� �ϳ� �Է�: _\b");
	scanf("%d", &chapter);

	if (chapter == 1)
	{
		goto Chapter1;
	}
	else if (chapter == 2)
	{
		goto Chapter2;
	}
	else
	{
		goto End;
	}

Chapter1:
	printf("1���Դϴ�.\n");
Chapter2:
	printf("2���Դϴ�.\n");
	goto Start;

End:
	printf("����\n");
	return 0;
}