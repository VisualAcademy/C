//[?] 2개의 정수 배열 합치기: 단, 2개의 배열은 오름차순으로 정렬되어 있다고 가정
#include <stdio.h>

// 병합 알고리즘(Merge Algorithm): 오름차순으로 정렬되어 있는 정수 배열을 하나로 병합
main()
{
	//[1] Input
	int first[] = { 1, 3, 5 }; // 오름차순 정렬됨
	int second[] = { 2, 4 }; // 오름차순 정렬됨
	int M = sizeof(first) / sizeof(int); 
	int N = sizeof(second) / sizeof(int); // M:N 관행
	//int merge[M + N] = { 0, }; // 병합된 배열을 담을 그릇
	int* merge = malloc((M + N) * sizeof(int)); // 병합된 배열을 담을 그릇
	int i = 0; int j = 0; int k = 0; // i, j, k 관행

	//[2] Process: MERGE 
	while (i < M && j < N) // 둘 중 하나라도 배열의 끝에 도달할 때까지
	{
		if (first[i] < second[j]) // 더 작은 값을 merge 배열에 저장
		{
			merge[k++] = first[i++];
		}
		else
		{
			merge[k++] = second[j++];
		}
	}
	while (i < M) // 첫 번째 배열이 끝까지 도달할 때까지 
	{
		merge[k++] = first[i++];
	}
	while (j < N) // 두 번째 배열이 끝까지 도달할 때까지 
	{
		merge[k++] = second[j++];
	}

	//[3] Output
	for (int i = 0; i < M + N; i++)
	{
		printf("%d\t", merge[i]);
	}
	printf("\n");

	//[4] Dispose
	free(merge);
}
