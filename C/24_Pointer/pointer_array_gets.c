// ȭ�����κ��� ���ڿ��� �Է¹޾Ƽ� ����ϴ� ���α׷�: scanf() ��ſ� gets() �Լ� ���
#include <stdio.h>

int main(void)
{
	char str[100];

	printf("���ڿ��� �Է��Ͻÿ� : ");
	//scanf("%s", str);
	gets(str); // ������ ���ڿ��� �о���� �Լ�

	printf("%s\n", str);

	return 0;
}