#include <stdio.h>

//�Լ� ����
void EvenNumber(int n);

void main(void) {
	// �Լ� ȣ��
	EvenNumber(10);//1���� 10���� ¦������
	EvenNumber(100);//1���� 100���� ¦������
	EvenNumber(1000);
}

void EvenNumber(int n) {
	int intSum = 0;
	int i;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			intSum += i;
		}
	}
	printf("1���� %d���� ¦���� �� : %d\n", n, intSum);
}
