// �Ʒ� n �迭�� ����ִ� ���� �߿��� 3�� ����� �������� ����Ͻÿ�.
#include <stdio.h>

void main() {
	int n[] = { 12, 3, 6, 7, 24, 48, 21, 15, 9, 42 };
	int m[10];
	// ����� ����/ī��Ʈ�˰���
	int i, j, temp, count = 0;
	for (i = 0; i < 10; i++) {
		if (n[i] % 3 == 0) {
			m[count] = n[i];
			count++;
		}
	}
	// ��������
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {
			if (m[i] < m[j]) {
				temp = m[i]; m[i] = m[j]; m[j] = temp;
			}
		}
	}
	// ���
	for (i = 0; i < count; i++) {
		printf("%d\n", m[i]);
	}
}
