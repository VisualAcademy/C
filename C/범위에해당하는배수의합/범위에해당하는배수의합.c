// ������ �ش��ϴ� ����� ���� ���ϴ� �Լ� ����
#include <stdio.h>

void Number(int a, int b);

void main() {
	Number(100, 2); // 1~100���� 3�� ����� ��
	Number(50, 4); // 1~50���� 4�� ����� ��
}

void Number(int a, int b) {
	int sum = 0;
	int i = 0;
	for (i = 1; i <= a; i++) {
		if (i % b == 0) {
			sum += i;
		}
	}
	printf("1���� %d���� %d�� ����� �� : %d\n", a, b, sum);
}
