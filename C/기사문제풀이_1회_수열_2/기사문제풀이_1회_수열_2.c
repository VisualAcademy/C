//1-2+3-4+5-6+..........+999-1000=-500
#include <stdio.h>

void main() {
	//[1] Input
	int intSum = 0;
	int i = 0;
	//[2] Process
	i = 1;					//�ʱ��
	do {
		if (i % 2 == 1) {	//���͸��� �߰��� ���๮
			intSum += i;
		}
		else {
			intSum -= i;
		}
		i++;				//������
	} while (i <= 1000);		//���ǽ�
	//[3] Output
	printf("����� : %d\n", intSum);
}
