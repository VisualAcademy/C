/*
	���α׷��� : ���� ��� ���α׷�V0.3
*/
#include <stdio.h>

#define N 3	//���

//[0] ����ü ����
struct Record {
	int Num;			//��ȣ
	int Eng;			//����
	int Jap;			//�Ͼ�
	int Tot;			//����
	float Avg;			//���
	char Grade;			//����
};

//[!] �Է� ����� �Լ� ���� : ������
void Input(
	struct Record* objInputData);
//[!] ó�� ����� �Լ� ���� : ��ȯ��
struct Record* MyProcess(
	struct Record InputData[]);
//[!] ��� ����� �Լ� ���� : ����
void Output(
	struct Record objInputData[]);

//[!] ���� �Լ�
void main(void) {
	//[1] Init
	struct Record InputData[N];//�Է�
	//[2] Input(8.1.7) : ������ ����
	Input(InputData);//�ּ�����
	//[3] Process(8.1.8) : ������ ����
	memcpy(InputData, MyProcess(InputData));
	//[4] Output(8.1.6) : ���� ���� 
	Output(InputData);//����ü �ѱ��
}

//[!] �Է� ����� �Լ� ����
void Input(
	struct Record* objInputData) {
	int i;
	for (i = 0; i < 3; i++) {
		printf("\n�л���ȣ : _\b");
		scanf("%d", &objInputData[i].Num);
		printf("\n�������� : ___\b\b\b");
		scanf("%d", &objInputData[i].Eng);
		printf("\n�Ͼ����� : ___\b\b\b");
		scanf("%d", &objInputData[i].Jap);
	}
}

//[!] ó�� ����� �Լ� ����
struct Record* MyProcess(
	struct Record InputData[]) {
	int i;
	for (i = 0; i < N; i++) {
		//[i]����
		{
			InputData[i].Tot =
				InputData[i].Eng
				+ InputData[i].Jap;
		}
		//[ii]���
		{
			InputData[i].Avg =
				InputData[i].Tot / 2.0;
		}
		//[iii]����
		{
			if (InputData[i].Avg > 90
				&& InputData[i].Avg <= 100) {
				InputData[i].Grade = 'A';
			}
			else if (InputData[i].Avg > 80) {
				InputData[i].Grade = 'B';
			}
			else if (InputData[i].Avg > 70) {
				InputData[i].Grade = 'C';
			}
			else if (InputData[i].Avg > 60) {
				InputData[i].Grade = 'D';
			}
			else {
				InputData[i].Grade = 'F';
			}
		}
		//[iv]��� �ݿø� : 3.5 -> 4
		{
			InputData[i].Avg =
				(int)(InputData[i].Avg + 0.5);
		}
	}
	return InputData;
}

//[!] ��� ����� �Լ� ����
void Output(
	struct Record objInputData[])
{
	int i;
	printf("\nó�� ������ ���\n");
	printf("��ȣ ���� �Ͼ� ���� ��� ����\n");
	for (i = 0; i < N; i++) {
		printf(
			"%4d %4d %4d %4d %4.1f %4c\n"
			, objInputData[i].Num
			, objInputData[i].Eng
			, objInputData[i].Jap
			, objInputData[i].Tot
			, objInputData[i].Avg
			, objInputData[i].Grade
		);
	}
	printf("\n���� ������ ���\n");
	for (i = 0; i < N; i++) {
		printf("%d %d %d\n"
			, objInputData[i].Num
			, objInputData[i].Eng
			, objInputData[i].Jap);
	}
}