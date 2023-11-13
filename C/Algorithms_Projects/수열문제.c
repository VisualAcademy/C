// 퀴즈) 1/2 - 2/3 + 3/4 - 4/5 + ... - 98/99 + 99/100 = ?
// 분자 : 1~99
// 분모 : 분자 + 1
// 홀수 : +
// 짝수 : -
#include <stdio.h>

void main() {
	//[1] Input
	double dblNum = 0.0;
	int i;
	//[2] Process : 수열
	for (i = 1; i <= 99; i++) {
		if (i % 2 == 1) { // 홀수라면		
			dblNum += i / (double)(i + 1);
		}
		else {
			dblNum -= i / (double)(i + 1);
		}
	}
	//[3] Output
	printf("결과값 : %.4f\n", dblNum);
}
