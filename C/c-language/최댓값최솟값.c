#include <stdio.h>
#include <limits.h> // INT_MAX, INT_MIN

main()
{
	//[1] Input
	int intNum[5] = { -3,-2,-4,-5,-1 };
	int i;
	int intMax = INT_MIN;//���� ���� ������ �Ǵ� �־��� �ڷ��� ���� �� ���� ���� ������ �ʱ�ȭ
	int intMin = INT_MAX;//���� ū ������
	//[2] Process : 
	//[a] �ִ� �˰���
	for (i = 0; i < 5; i++) {
		if (intMax < intNum[i]) {
			intMax = intNum[i];
		}
	}
	//[b] �ּڰ� �˰���
	for (i = 0; i < 5; i++) {
		if (intMin > intNum[i]) {
			intMin = intNum[i];
		}
	}
	//[3] Output
	printf("�ִ� : %d\n", intMax);//-1
	printf("�ּڰ� : %d\n", intMin);//-5
}
