// ���� �Լ� : ������ ���(���ǰ� ���)
#include <stdio.h>	// printf(), scanf(), ...
#include <stdlib.h>	// rand(), ...
#include <time.h>	// time()

int main(void)
{
	int i = 0;
	int r = 0;
	int l = 0;

	//[1] ���� �ʱⰪ ����
	srand((unsigned)time(0));

	//for (i = 0; i < 10; i++)
	//{
	//	r = rand(); // 0~32767 �� �ϳ��� ���
	//	printf("%d\n", r);
	//}

	//[!] �ζ� ��ȣ ������ : 1~45������ ���� 5�� �����ϰ� ���
	for (i = 0; i < 5; i++)
	{
		l = rand() % 45 + 1; // rand() % 45 => 0~44���� �� �ϳ��� ����
		printf("%d, \t", l);
	}
	printf("\n");
}
