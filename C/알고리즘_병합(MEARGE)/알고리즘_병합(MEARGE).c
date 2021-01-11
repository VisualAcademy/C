/*
	병합(MEARGE) 알고리즘 : 오름차순으로 나열된 두 그룹의 데이터를 한 그룹의 데이터로 병합한다.
	(1) 데이터 a, b 중에 어느 한 쪽이 끝에 도달할 때까지 다음을 반복
	(2) a(i)와 b(j)를 비교해서 작은쪽을 c(k)에 복사하고 작은 쪽의 데이터 번호를 +1한다.
	(3) 둘 중에 아직 끝까지 도달하지 않은 데이터를 끝까지 복사한다.
*/
#include <stdio.h>

#define M 10
#define N 5

void main(void)
{
	//[1] Init/Input
	static int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	static int b[] = { 1, 3, 5, 7, 9 };
	static int c[M + N];	//병합된 데이터 저장

	//[2] Process
	int i, j, k;

	i = j = k = 0;

	while (i < M && j < N)	//a[], b[] 모두 끝에 도달하지 않은 동안
	{
		if (a[i] <= b[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}

	while (i < M)		//a[]가 끝에 도달할 때까지
	{
		c[k++] = a[i++];
	}

	while (j < N)		//b[]가 끝에 도달할 때까지
	{
		c[k++] = b[j++];
	}

	//[3] Output
	for (i = 0; i < M + N; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n");
}
