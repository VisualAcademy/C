// �Ʒ� �־��� �����Ϳ��� ¦���� ����� ���Ͻÿ�.
#include <stdio.h>

main()
{
	//Input  
	int a[10] = { 11, 22, 33, 44, 55, 54, 43, 32, 21, 10 };
	int sum = 0;
	int count = 0;
	float avg = 0.0;
	int i = 0;
	int* p; p = a;
	//Process
	for (i = 0; i < 10; i++) {
		if (*(p + i) % 2 == 0) {
			sum += *(p + i);        //�հ�
			count++;                //�Ǽ�
		}
	}
	avg = sum / (float)count;       //���
	//Output
	printf("¦���� �հ� : %d\n"
		"¦���� �Ǽ� : %d\n"
		"¦���� ��� : %.1f\n", sum, count, avg);
}
