//[?] 컬렉션 형태의 데이터를 특정 키 값으로 그룹화
#include <stdio.h>
#include <string.h>

// 그룹 알고리즘(Group Algorithm): 특정 키 값에 해당하는 그룹화된 합계 리스트 만들기

// 테스트용 레코드 구조체 
struct Record
{
	char	Name[10]; // 상품명
	int		Quantity; // 수량
};

int main(void)
{
	//[1] Input
	struct Record records[4] = {
		{"RADIO", 3},
		{"TV", 1},
		{"RADIO", 2},
		{"DVD", 4}
	}; // 입력 데이터	
	struct Record groups[4] = { {"", 0}, };  // 출력 데이터 
	int N = sizeof(records) / sizeof(records[0]); // 의사코드 

	//[2] Process: Group 알고리즘(SORT -> SUM -> GROUP)
	//[A] 그룹 정렬: SORT 
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (strcmp(records[i].Name, records[j].Name) > 0)
			{
				struct Record temp;
				temp = records[i];
				records[i] = records[j];
				records[j] = temp;
			}
		}
	}

	//[B] 그룹 소계: GROUP
	int groupCount = 0; // 그룹수 
	int subtotal = 0; // 소계
	for (int i = 0; i < N; i++)
	{
		subtotal += records[i].Quantity; // 같은 상품명의 수량을 누적(SUM)
		if ((i + 1) == N || // 단락(short circuiting)이면 아래 조건 무시 
			(strcmp(records[i].Name, records[i + 1].Name) != 0))
		{
			//[!] 다음 레코드가 없거나, 현재 레코드와 다음 레코드가 다르면 저장
			strcpy_s(groups[groupCount].Name, 10, records[i].Name); // 한 그룹의 키(Key) 지정
			groups[groupCount].Quantity = subtotal; // 소계
			groupCount++; // 그룹수 증가
			subtotal = 0; // 하나의 그룹이 완료되면 소계 초기화
		}
	}

	//[3] Output
	printf("[1] 정렬된 원본 데이터:\n");
	for (int i = 0; i < N; i++)
	{
		printf("%6s - %d\n", records[i].Name, records[i].Quantity);
	}
	printf("[2] 이름으로 그룹화된 데이터:\n");
	for (int i = 0; i < groupCount; i++)
	{
		printf("%6s - %d\n", groups[i].Name, groups[i].Quantity);
	}
}
