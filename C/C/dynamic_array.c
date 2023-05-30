#define _CRT_SECURE_NO_WARNINGS  // 보안 경고 무시 설정 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    int* ptr;

    printf("배열 크기 입력: ");  // 동적 배열 크기 입력 요청
    scanf("%d", &n);

    // 동적 배열 할당
    ptr = (int*)malloc(n * sizeof(int));  // 크기 n에 따른 메모리 할당
    if (ptr == NULL)  // 메모리 할당 실패 검사
    {
        printf("메모리 할당 실패\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        *(ptr + i) = i;  // 배열에 값 할당
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));  // 배열 값 출력
    }
    printf("\n");

    // 메모리 해제
    free(ptr); 

    return 0;
}
