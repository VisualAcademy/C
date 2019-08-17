#include <stdio.h>
#include <string.h>

//Input data
struct Record
{
	char	ProductName[6];	//��ǰ��
	int	Quantity;		//�Ǹŷ�
}record[10];

//Output data
struct Output
{
	char ProductName[6];	//��ǰ��
	int Quantity;			//�Ǹŷ�
}output[10];

void main(void)
{
	//Init
	FILE* objInData;
	FILE* objOutData;
	char strBuffer[10];
	char strTemp[4];
	int intCount = 0;
	int i = 0; int j = 0; struct Record temp;
	//_Group
	int intSubTotal = 0;		//�׷�Ұ�
	int intGroupCount = 0;		//�׷��

	//Input
	objInData =
		fopen("C:\\C_Fundamental.Source\\!�˰���\\�˰���_�׷�(Group)\\Data\\abc1229.txt", "rt");
	objOutData =
		fopen("C:\\C_Fundamental.Source\\!�˰���\\�˰���_�׷�(Group)\\Data\\abc1229_.txt", "wt");

	if (objInData == NULL || objOutData == NULL)
	{
		perror("������ �� �� �����ϴ�.");
		exit(1);
	}

	while (!feof(objInData))
	{
		fgets(strBuffer, 10, objInData);

		strncpy(record[intCount].ProductName, strBuffer + 0, 5);
		record[intCount].Quantity = atoi(
			strncpy(strTemp, strBuffer + 5, 3));
		intCount++;
	}
	printf("�Է� �� ������ : \n");
	for (i = 0; i < intCount; i++)
	{
		printf("%s %d\n", record[i].ProductName, record[i].Quantity);
	}

	//Process
	//_Sort
	for (i = 0; i < intCount - 1; i++)
	{
		for (j = i + 1; j < intCount; j++)
		{
			if (strcmp(record[i].ProductName, record[j].ProductName) > 0)
			{
				temp = record[i];
				record[i] = record[j];
				record[j] = temp;
			}
		}
	}
	printf("���� �� ������ : \n");
	for (i = 0; i < intCount; i++)
	{
		printf("%s %d\n", record[i].ProductName, record[i].Quantity);
	}

	//_Group
	for (i = 0; i < intCount; i++)
	{
		intSubTotal += record[i].Quantity;//�׷�Ұ�
		if (strcmp(record[i].ProductName, record[i + 1].ProductName) != 0)
		{
			strcpy(output[intGroupCount].ProductName, record[i].ProductName);
			output[intGroupCount].Quantity = intSubTotal;//�׷�Ұ�
			intGroupCount++;		//�׷�� ����
			intSubTotal = 0;//�׷�Ұ� �ʱ�ȭ
		}
	}

	//Output
	printf("ó�� �� ������ : \n");
	for (i = 0; i < intGroupCount; i++)
	{
		printf("%s %d\n", output[i].ProductName, output[i].Quantity);
	}

	//Dispose
	fclose(objInData);
	fclose(objOutData);
}

/*
abc1229.txt������ ����
--------------------
RADIO  5
TV     6
PHONE  3
RADIO  2
PHONE  2
TV    10
PHONE 11
TV     7
PHONE  4
*/