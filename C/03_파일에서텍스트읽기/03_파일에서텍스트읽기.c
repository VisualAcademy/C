// ���� �ؽ�Ʈ �б� : C:\Temp\Hello.txt
#include <stdio.h>

void main(void)
{
	char buffer[80]; // ���ڿ��� ������ ���� ����
	//[0] ���� ó���� ���� FILE ������ �� ���� ����
	FILE* objFile;

	//[1] ���� ���� �õ� : ���� ���� �Ǵ� ����
	objFile = fopen("c:\\Temp\\Hello.txt", "rt"); // rt : �ؽ�Ʈ �б�

	//[2] ���� ���� Ȯ��
	if (objFile == NULL)
	{
		printf("������ �������� �ʾҽ��ϴ�. ��γ� ������ ���캸����.\n");
	}
	else
	{
		//[4] ���Ͽ��� �ؽ�Ʈ �б� : EOF(End Of File) : ������ ��
		//fscanf(objFile, "%s\n", buffer);	// ���Ͽ��� �о�ͼ�(����)
		while (fscanf(objFile, "%s\n", buffer) != EOF) // ���Ͽ��� �о�ͼ�(������), fgets(), fputs()
		{
			printf("%s\n", buffer);				// ȭ�鿡 ���
		}
	}

	//[3] ���� �ݱ�
	fclose(objFile);
}
