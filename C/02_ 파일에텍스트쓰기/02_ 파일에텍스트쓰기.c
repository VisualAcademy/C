// ���� �ؽ�Ʈ ���� : C:\Temp\Hello.txt
#include <stdio.h>

void main(void)
{
	//[0] ���� ó���� ���� FILE ������ �� ���� ����
	FILE* objFile;

	//[1] ���� ���� �õ� : ���� ���� �Ǵ� ����
	objFile = fopen("c:\\Temp\\Hello.txt", "wt"); // wt : �ؽ�Ʈ ����

	//[2] ���� ���� Ȯ��
	if (objFile == NULL)
	{
		printf("������ �������� �ʾҽ��ϴ�. ��γ� ������ ���캸����.\n");
	}
	else
	{
		//[4] ���Ͽ� �ؽ�Ʈ ����
		fprintf(objFile, "%s\n", "�ȳ��ϼ���.");
	}

	//[3] ���� �ݱ�
	fclose(objFile);
}
