//[?] n명의 점수 중에서 80점 이상 95점 이하인 점수의 평균
#include <stdio.h>

// 평균 알고리즘(Average Algorithm): 주어진 범위에 주어진 조건에 해당하는 자료들의 평균
main()
{
	//[1] Input: n명의 성적
	int data[5] = { 90, 65, 78, 50, 95 };
	int sum = 0; // 합계 담는 그릇
	int count = 0; // 개수 담는 그릇
	int N = sizeof(data) / sizeof(int); // 의사코드(슈도코드)

	//[2] Process: AVG = SUM / COUNT
	for (int i = 0; i < N; i++) // 주어진 범위
	{
		if (data[i] >= 80 && data[i] <= 95) // 주어진 조건
		{
			sum += data[i]; // SUM
			count++; // COUNT
		}
	}

	double avg = sum / (double)count; // AVERAGE

	//[3] Output
	printf("80점 이상 95점 이하인 자료의 평균: %.2f\n", avg); // 92.50
}
