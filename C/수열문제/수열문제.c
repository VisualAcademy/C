// ����) 1/2 - 2/3 + 3/4 - 4/5 + ... - 98/99 + 99/100 = ?
// ���� : 1~99
// �и� : ���� + 1
// Ȧ�� : +
// ¦�� : -
#include <stdio.h>

void main() {
	//[1] Input
	double dblNum = 0.0;
	int i;
	//[2] Process : ����
	for (i = 1; i <= 99; i++) {
		if (i % 2 == 1) { // Ȧ�����		
			dblNum += i / (double)(i + 1);
		}
		else {
			dblNum -= i / (double)(i + 1);
		}
	}
	//[3] Output
	printf("����� : %.4f\n", dblNum);
}
