/*
	6.1.1. ����. �迭�� ����, ��Ҽ� ����, �ʱ�ȭ, ���� : �������迭1.c
*/
//����ڷκ��� 3���� �����͸� �Է¹޾�,
//�հ踦 ���ϴ� ���α׷�.
#include <stdio.h>
int main() {
	//Init
	int i, intSum = 0;
	int intNum[3];//�迭	
	//Input
	for (i = 0; i < 3; i++) {
		printf("\n%d��° �Է� : ", i + 1);
		scanf("%d", &intNum[i]);
	}
	//Process
	for (i = 0; i < 3; i++) {
		intSum += intNum[i];
	}
	//Output
	printf("\n�հ� : %d\n", intSum);
	return 0;
}
