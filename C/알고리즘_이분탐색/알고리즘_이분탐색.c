/*
	이분 탐색법 : 데이터가 정렬되어 있을 때 유효함
*/
#include <stdio.h>

#define N 5 //데이터 수

int main(void)
{
	static int intNum[] = { 21, 33, 35, 47, 59 };//정렬되어 있어야 함.
	int key = 0; // 검색할 키(데이터) 저장
	int low = 0; // 왼쪽 인덱스
	int high = 0; // 오른쪽 인덱스
	int mid = 0; // 가운데 인덱스 : N / 2
	int flag = 0; // 참 또는 거짓

	printf("탐색할 데이터 : "); scanf("%d", &key);
	low = 0; high = N - 1;
	while (low <= high)
	{
		printf("반복....\n");
		mid = (low + high) / 2;
		if (intNum[mid] == key)
		{
			printf("%d는 %d 번째에 있습니다.\n", intNum[mid], mid);
			flag = 1;
			break;
		}
		if (intNum[mid] < key)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (flag != 1)
	{
		printf("찾을 수 없습니다.\n");
	}
}
