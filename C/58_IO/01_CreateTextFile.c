#define _CRT_SECURE_NO_WARNINGS

// ���Ͽ� �ؽ�Ʈ ����(����)
#include <stdio.h>

int main(void)
{
	//[0] ���� ó���� ���� FILE ������ �� ���� ����
	FILE* objFile;

	//[1] ���� ���� �õ� : ���� ���� �Ǵ� ����
	objFile = fopen("c:\\Temp\\Hello.txt", "w+"); // ������ ����

	//[2] ���� ���� Ȯ��
	if (objFile == NULL)
	{
		printf("������ �������� �ʾҽ��ϴ�. ��γ� ������ ���캸����.\n");
	}
	else
	{
		printf("���� ���� �Ϸ�.\n");
	}

	//[3] ���� �ݱ�
	fclose(objFile);
}
