#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

FILE* stream;

main()
{
	// ���� ���� �õ�
	stream = fopen("C:\\temp\\C.txt", "r");

	// ���� ���� ��� Ȯ��
	if (stream == NULL)
	{
		printf("������ ���ų�, ������ ���µ��� �ʾҽ��ϴ�.");
	}
	else
	{
		printf("������ �ְ�, ������ ���µǾ����ϴ�.");
	}

	// ���� �ݱ�
	if (stream)
	{
		fclose(stream);
	}
}
