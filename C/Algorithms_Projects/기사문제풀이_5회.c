//1-2+4-7+11-16+22=13
#include <stdio.h>

void main() {
	//[1] Input
	int sum = 0;
	int i = 0;
	int data = 1;
	//[2] Process
	for (i = 0; i < 7; i++) {
		if (i % 2 == 0) { // �ε����� Ȧ����� ���ϰ�,
			sum += data;
		}
		else {
			sum -= data;
		}
		data = data + (i + 1);//���絥���Ϳ� �����ε����� ����
	}
	//[3] Output
	printf("%d\n", sum);
	printf("%d\n", 1 - 2 + 4 - 7 + 11 - 16 + 22);
}
