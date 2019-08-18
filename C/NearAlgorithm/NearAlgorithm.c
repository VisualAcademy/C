//[?] 원본 데이터 중에서 대상 데이터와 가장 가까운 값
#include <stdio.h>
#include <limits.h>
#include <math.h>

// 근삿값 알고리즘(Near Algorithm): 가까운 값 -> 차잇값의 절댓값의 최솟값
main()
{
	//[0] Initialize
	int min = INT_MAX; // 차잇값의 절댓값의 최솟값이 담길 그릇

	//[1] Input
	int numbers[5] = { 10, 20, 30, 27, 17 };
	int target = 25; // target과 가까운 값
	int near = 0; // 가까운 값: 27
	int N = sizeof(numbers) / sizeof(int); 

	//[2] Process: NEAR
	for (int i = 0; i < N; i++)
	{
		int _abs = abs(numbers[i] - target); // 차잇값의 절댓값
		if (_abs < min)
		{
			min = _abs; // MIN: 최솟값 알고리즘
			near = numbers[i]; // NEAR: 차잇값의 절댓값의 최솟값일 때의 값
		}
	}

	//[3] Output
	printf("%d와/과 가장 가까운 값: %d(차이: %d)\n", target, near, min);
}
