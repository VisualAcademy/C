// 5개의 점수의 순위를 구하는 프로그램
#include <stdio.h>

void main() {
	//[1] Input
	int intNum[5] = { 33, 22, 11, 55, 44 };
	int intRank[5] = { 0, };
	int i = 0;
	int j = 0;
	int temp = 0; int temp2 = 0;
	//[2] Process : 순위(RANK) 알고리즘
	for (i = 0; i < 5; i++) {
		intRank[i] = 1; // 모든 점수는 1등으로 초기화
		for (j = 0; j < 5; j++) {
			if (intNum[i] < intNum[j]) {
				intRank[i]++;
			}
		}
	}
	// 선택 정렬 알고리즘 적용
	for (i = 0; i < 5 - 1; i++) {
		for (j = i + 1; j < 5; j++) {
			if (intNum[i] > intNum[j])
			{
				temp = intNum[i];
				intNum[i] = intNum[j];
				intNum[j] = temp;

				temp2 = intRank[i];
				intRank[i] = intRank[j];
				intRank[j] = temp2;
			}
		}
	}
	//[3] Output
	for (i = 0; i < 5; i++) {
		printf("점수 %d(%d등)\n", intNum[i], intRank[i]);
	}
}
