// if��(���ǹ�), switch��(���ù�)
#include <stdio.h>

int main(void)
{
	// 1~5������ ������ �Է¹޾Ƽ� ���� �ش��ϴ� ������ ó��
	int num = 0;
	printf("1~5���� ���� �Է� : _\b"); scanf("%d", &num);

	// if������ ���� �Ǵ�
	if (num >= 1 && num <= 5)
	{
		// switch������ ǥ���� ó��
		switch (num)
		{
		case 1:  printf("%d�� �ش��ϴ� ��� ����\n", num); break;
		case 2:  printf("%d�� �ش��ϴ� ��� ����\n", num); break;
		case 3:  printf("%d�� �ش��ϴ� ��� ����\n", num); break;
		case 4:  printf("%d�� �ش��ϴ� ��� ����\n", num); break;
		case 5:  printf("%d�� �ش��ϴ� ��� ����\n", num); break;
		default: printf("��ǻ�� ����\n"); break;
		}
	}
	else
	{
		printf("�Է� ����...\n");
	}

	return 0;
}
