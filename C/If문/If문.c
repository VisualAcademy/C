#define _CRT_SECURE_NO_WARNINGS
/*
	If�� : ���ǹ� : ������ ���϶��� �����϶� �����ϴ� ������ �б�
*/
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// ���� ����
	int num = 0;
	int r = 0;
	// ȭ�����κ��� ���� �Է�
	printf("���ڸ� �Է��Ͻÿ�. _\b"); 
	r = scanf("%d", &num);
	// ���� �Ǵ� �� ���
	printf("\n�Է��� �� : %d\n", num);
	//[1] ���밪 : +���� �״�� ���, -���� -��ȣ�� �ٿ��� +�� ��ȯ�ؼ� ���
	if (num < 0) // if��
	{
		num = -num; // ��ȣ ��ȯ 
	}
	printf("���밪 : %d\n", num); // ���
	//[2] ¦��/Ȧ�� 
	if (num % 2 == 0)	// ¦�����?
	{
		printf("%d : ¦��\n", num);	// ������ ���� �� ����
	}
	else
	{
		printf("%d : Ȧ��\n", num);	// ������ ������ �� ����
	}

	//[3] ���� ����
	if (num % 7 == 0)
	{
		printf("%d : 7�� ���\n", num);
	}
	else if (num % 5 == 0)
	{
		printf("%d : 5�� ���\n", num);
	}
	else if (num % 3 == 0)
	{
		printf("%d : 3�� ���\n", num);
	}
	else
	{
		printf("%d : 3, 5, 7�� ����� �ƴ� ��\n", num);
	}

	system("pause");
}
