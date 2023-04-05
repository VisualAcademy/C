// 이진(이분) 검색(탐색) : Binary Search :
// - 데이터가 정렬되어있다고 가정 : 다른 정렬 알고리즘 활용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int data[] = { 1, 4, 5, 7, 9 };
    int search;
    int low = 0;
    int mid = 0;
    int high = sizeof(data) / sizeof(int) - 1; // N - 1
    bool flag = false; // 못 찾았다를 가정.

    printf("검색할 데이터 : ");
    scanf("%d", &search);

    while (low <= high)
    {
        mid = (low + high) / 2; // 반씩 끊어서 검색
        if (data[mid] == search)
        {
            printf("%d을(를) %d 인덱스에서 찾았습니다.\n", search, mid);
            flag = true;
            break; // 찾았으면 종료
        }
        if (data[mid] < search)
        {
            low = mid + 1; // 작은 것은 검색할 필요없음
        }
        else
        {
            high = mid - 1; // 큰 것은 검색할 필요없음
        }
    }
    if (!flag)
    {
        printf("%d는 찾을 수 없습니다...\n", search);
    }

    return 0;
}
