// 5���� ������ ������ ���ϴ� ���α׷�
#include <stdio.h>

void main() {
	//[1] Input
	int intNum[5] = { 33, 22, 11, 55, 44 };
	int intRank[5] = { 0, };
	int i = 0;
	int j = 0;
	int temp = 0; int temp2 = 0;
	//[2] Process : ����(RANK) �˰���
	for (i = 0; i < 5; i++) {
		intRank[i] = 1; // ��� ������ 1������ �ʱ�ȭ
		for (j = 0; j < 5; j++) {
			if (intNum[i] < intNum[j]) {
				intRank[i]++;
			}
		}
	}
	// ���� ���� �˰��� ����
	for (i = 0; i < 5 - 1; i++) {
		for (j = i + 1; j < 5; j++) {
			if (intNum[i] > intNum[j])
			{
				temp = intNum[i];
				intNum[i] = intNum[j];
				intNum[j] = temp;

				temp2 = intRank[i];
				intRank[i] = intRank[j];
				intRank[j] = temp2;
			}
		}
	}
	//[3] Output
	for (i = 0; i < 5; i++) {
		printf("���� %d(%d��)\n", intNum[i], intRank[i]);
	}
}
