// ���ڿ� ������Լ�
// gets() : ���ڿ� �Է� + ����, scanf()
// puts() : ���ڿ� ���, printf()
#include <stdio.h>

void main(void)
{
	char strBuffer[100]; // 100���� ���ڸ� ���� �� �ִ� ���� ����

	printf("�ִ� 100���� ���ڿ��� �Է��Ͻÿ�...\n");
	gets(strBuffer); // �Է� ��� 
	puts(strBuffer);

	printf("�ִ� 100���� ���ڿ��� �Է��Ͻÿ�...\n");
	gets(strBuffer);
	puts(strBuffer);
}
