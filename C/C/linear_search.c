#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE], key, index = -1; // 배열, 키, 인덱스 초기화

    // 사용자로부터 5개의 정수를 입력받아 배열에 저장
    printf("5개의 정수를 입력하세요:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 사용자로부터 찾을 정수(키)를 입력받음
    printf("찾을 숫자를 입력하세요: ");
    scanf("%d", &key);

    // 선형 검색 알고리즘을 사용하여 키와 일치하는 원소를 찾음
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == key)
        {
            index = i; // 키가 일치하는 원소의 인덱스를 저장
            break; // 더 이상 검색할 필요가 없으므로 반복문을 종료
        }
    }

    // 찾은 원소의 인덱스를 출력하거나, 원소를 찾지 못했음을 알림
    if (index != -1)
    {
        printf("찾은 숫자 %d의 인덱스: %d\n", key, index);
    }
    else
    {
        printf("찾지 못했습니다.\n");
    }
    return 0;
}
