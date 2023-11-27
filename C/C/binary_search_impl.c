// binary_search_impl.c || 알고리즘_이분탐색.c 
#include <stdio.h>

#define N 5 // 정렬된 데이터의 수

int main(void)
{
    // 정렬된 데이터 배열
    int sortedArray[] = { 21, 33, 35, 47, 59 };

    int key; // 사용자로부터 입력받을 검색 키
    int low = 0; // 검색 범위의 시작 인덱스
    int high = N - 1; // 검색 범위의 끝 인덱스
    int mid; // 검색 범위의 중간 인덱스
    int flag = 0; // 검색 성공 여부 플래그

    printf("탐색할 데이터: ");
    if (scanf("%d", &key) != 1)
    {
        printf("올바른 숫자를 입력하세요.\n");
        return 1;
    }

    while (low <= high)
    {
        mid = low + (high - low) / 2; // 중간 인덱스 계산 (오버플로 방지)

        if (sortedArray[mid] == key)
        {
            printf("%d는 %d번째에 있습니다.\n", key, mid + 1);
            flag = 1;
            break;
        }
        else if (sortedArray[mid] < key)
        {
            low = mid + 1; // 검색 범위를 상위 절반으로 조정
        }
        else
        {
            high = mid - 1; // 검색 범위를 하위 절반으로 조정
        }
    }

    if (!flag)
    {
        printf("찾을 수 없습니다.\n");
    }

    return 0;
}
