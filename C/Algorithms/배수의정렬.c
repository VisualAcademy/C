// 아래 n 배열에 들어있는 정수 중에서 3의 배수를 역순으로 출력하시오.
#include <stdio.h>

void main() {
	int n[] = { 12, 3, 6, 7, 24, 48, 21, 15, 9, 42 };
	int m[10];
	// 배수만 저장/카운트알고리즘
	int i, j, temp, count = 0;
	for (i = 0; i < 10; i++) {
		if (n[i] % 3 == 0) {
			m[count] = n[i];
			count++;
		}
	}
	// 선택정렬
	for (i = 0; i < count - 1; i++) {
		for (j = i + 1; j < count; j++) {
			if (m[i] < m[j]) {
				temp = m[i]; m[i] = m[j]; m[j] = temp;
			}
		}
	}
	// 출력
	for (i = 0; i < count; i++) {
		printf("%d\n", m[i]);
	}
}
