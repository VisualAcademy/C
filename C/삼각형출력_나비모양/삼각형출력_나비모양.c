#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 왼쪽 날개 출력 함수
void MakeButterflyLeft(int row)
{
	int i, j = 0; // i변수는 행반복, j변수는 열반복 용
	int mid = row / 2; // 중간값(반전)

	// 행반복 : i변수는 무조건 행 반복(0~row-1)
	for (i = 0; i < row; i++)
	{
		if (i < mid + 1)		// 중간값까지는 별표를 증가
		{
			// 열반복
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("*");
			}
		}
		else					// 중간값 이후로는 별표를 감소
		{
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

// 오른쪽 날개 출력 함수
void MakeButterflyRight(int row)
{
	int i, j = 0; // i변수는 행반복, j변수는 열반복 용
	int mid = row / 2; // 중간값(반전)

	// 행반복 : i변수는 무조건 행 반복(0~row-1)
	for (i = 0; i < row; i++)
	{
		if (i < mid + 1)		// 중간값까지는 별표를 증가
		{
			// 공백 출력(공백 감소)
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("-");
			}
			// 열반복(별표 증가)
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("*");
			}
		}
		else					// 중간값 이후로는 별표를 감소
		{
			// 공백 출력(공백 증가)
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("-");
			}
			// 열반복(별표 감소)
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

// 양쪽 날개 출력 함수
void MakeButterflyAll(int row)
{
	int i, j = 0; // i변수는 행반복, j변수는 열반복 용
	int mid = row / 2; // 중간값(반전)

	// 행반복 : i변수는 무조건 행 반복(0~row-1)
	for (i = 0; i < row; i++)
	{
		if (i < mid + 1)		// 중간값까지는 별표를 증가
		{
			// 왼쪽
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("*");
			}
			// 공백 출력(공백 감소)
			for (j = 0; j < (mid - i); j++) // row->mid
			{
				printf(" ");
			}
			// 구분자
			printf(" ");
			// 오른쪽
			// 공백 출력(공백 감소)
			for (j = 0; j < (mid - i); j++) // row->mid
			{
				printf(" ");
			}
			// 열반복(별표 증가)
			for (j = 0; j < (i + 1); j++) // (i + 1) : 1~5
			{
				printf("*");
			}
		}
		else					// 중간값 이후로는 별표를 감소
		{
			// 왼쪽
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("*");
			}
			// 공백 출력(공백 증가)
			for (j = 0; j < (i - mid); j++) // (i + 1) : 1~5
			{
				printf(" ");
			}
			// 구분자
			printf(" ");
			// 오른쪽
			// 공백 출력(공백 증가)
			for (j = 0; j < (i - mid); j++) // (i + 1) : 1~5
			{
				printf(" ");
			}
			// 열반복(별표 감소)
			for (j = 0; j < (row - i); j++) // 9-5=4, 9-6=3
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

// 메인 함수
int main(void)
{
	int row = 0; // 행수 저장

	// 반복해서 메뉴 출력
	while (1 == 1) // 무한 루프
	{
		printf("삼각형 별표를 출력할 행수를 입력하세요(종료: 0) : _\b");
		scanf("%d", &row);

		// 종료 구문
		if (row == 0)
		{
			printf("\n\n프로그램을 종료합니다.\n");
			break; // while문 종료
		}

		// 예외 처리 : 양수만 입력
		if (row < 0)
		{
			printf("\n\n행수는 양수만 입력이 가능합니다.\n\n\n");
		}
		// 예외 처리 : 홀수만 입력
		else if (row % 2 == 0)
		{
			printf("\n\n행수는 홀수만 입력이 가능합니다.\n\n\n");
		}
		// 최종적으로 나비모양 출력
		else
		{
			MakeButterflyLeft(row); // 왼쪽 날개 출력
			MakeButterflyRight(row); // 오른쪽 날개 출력
			MakeButterflyAll(row); // 양쪽 날개 출력
		}
	} // end while
}
