#include <stdio.h>

void main() {
	//[1] Init
	int intNum[4] = { 0, };
	int i, j, temp;
	//[2] Input
	scanf_s("%d %d %d %d"
		, &intNum[0], &intNum[1], &intNum[2], &intNum[3]);
	//[3] Process : Selection Sort
	for (i = 0; i < 4 - 1; i++) {
		for (j = i + 1; j < 4; j++) {
			if (intNum[i] > intNum[j]) {
				temp = intNum[i];
				intNum[i] = intNum[j];
				intNum[j] = temp;
			}
		}
	}
	//[4] Output
	for (i = 0; i < 4; i++) {
		printf("%d\n", intNum[i]);
	}
}
