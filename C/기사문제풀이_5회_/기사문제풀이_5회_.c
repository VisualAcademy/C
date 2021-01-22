// 1-2+4-7+11-16+22 = ?
#include <stdio.h>

void main() {
	//[1] Input
	int sum = 0; // 합
	int data = 1;//1부터 시작해서 인덱스만큼 합을 한 데이터들...
	int i = 0;
	//[2] Process
	for (i = 0; i < 7; i++) {
		if (i % 2 == 0) {	// 인덱스가 짝수일 때
			sum += data;
		}
		else {
			sum -= data;	// 인덱스가 홀수일 때...
		}
		// printf("%d\n", data);
		data = data + (i + 1);
	}
	//[3] Output
	printf("결과값 : %d\n", sum);//13
	printf("결과값 : %d\n", (1 - 2 + 4 - 7 + 11 - 16 + 22));//13
}
