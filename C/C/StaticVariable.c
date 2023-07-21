#include <stdio.h>

/// <summary>
/// 떡국 먹기
/// </summary>
void eatSoup()
{
	// static 변수는 자동으로 0으로 초기화
	static int myAge; // 전역적으로 공유(Shared)되어 사용됨

	++myAge;

	printf("나이: %d\n", myAge);
}

void main()
{
	eatSoup(); eatSoup(); eatSoup();
}
