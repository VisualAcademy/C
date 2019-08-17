// 범위에 해당하는 배수의 합을 구하는 함수 설계
#include <stdio.h>

void Number(int a, int b);

void main() {
	Number(100, 2); // 1~100까지 3의 배수의 합
	Number(50, 4); // 1~50까지 4의 배수의 합
}

void Number(int a, int b) {
	int sum = 0;
	int i = 0;
	for (i = 1; i <= a; i++) {
		if (i % b == 0) {
			sum += i;
		}
	}
	printf("1부터 %d까지 %d의 배수의 합 : %d\n", a, b, sum);
}
