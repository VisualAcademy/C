// �迭�� �迭
#include <stdio.h>

int main(void)
{
	char* arr[3]; // �⺻ : ���� 3�� ����, �����͹迭 : ���ڿ� 3���� ������ ���� �׸�
	int i;

	arr[0] = "C���";
	arr[1] = "C++";
	arr[2] = "C#";

	for (i = 0; i < 3; i++)
	{
		printf("%s \n", arr[i]);
	}
}
