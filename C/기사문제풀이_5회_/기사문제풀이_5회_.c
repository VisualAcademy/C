// 1-2+4-7+11-16+22 = ?
#include <stdio.h>

void main() {
	//[1] Input
	int sum = 0; // ��
	int data = 1;//1���� �����ؼ� �ε�����ŭ ���� �� �����͵�...
	int i = 0;
	//[2] Process
	for (i = 0; i < 7; i++) {
		if (i % 2 == 0) {	// �ε����� ¦���� ��
			sum += data;
		}
		else {
			sum -= data;	// �ε����� Ȧ���� ��...
		}
		// printf("%d\n", data);
		data = data + (i + 1);
	}
	//[3] Output
	printf("����� : %d\n", sum);//13
	printf("����� : %d\n", (1 - 2 + 4 - 7 + 11 - 16 + 22));//13
}
