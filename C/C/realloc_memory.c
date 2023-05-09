#define _CRT_SECURE_NO_WARNINGS  // Visual Studio에서 경고 메시지를 무시하도록 하는 매크로
#include <stdio.h>  // 표준 입출력 함수를 사용하기 위해 stdio.h 헤더 파일을 포함
#include <stdlib.h>  // malloc, realloc 등의 메모리 관리 함수를 사용하기 위해 stdlib.h 헤더 파일을 포함

int main(void)
{
    int* arr = (int*)malloc(5 * sizeof(int));  // 정수형 포인터 arr를 선언하고, 동적 메모리 할당을 통해 int형 변수 5개 크기만큼의 메모리를 할당
    if (arr == NULL)  // 메모리 할당이 실패한 경우
    {
        printf("메모리 할당 실패\n");  // 에러 메시지 출력
        return 1;  // 프로그램 종료
    }

    for (int i = 0; i < 5; i++)  // arr 배열에 0부터 8까지의 2의 배수를 저장
    {
        arr[i] = i * 2;
    }

    int* newArr = (int*)realloc(arr, 10 * sizeof(int));  // arr의 크기를 10개의 int 크기로 늘리는 realloc 함수 사용
    if (newArr == NULL)  // 메모리 재할당이 실패한 경우
    {
        printf("메모리 재할당 실패\n");  // 에러 메시지 출력
        free(arr);  // 원래 할당한 메모리 해제
        return 1;  // 프로그램 종료
    }

    arr = newArr;  // arr 포인터에 재할당된 메모리의 주소 할당

    for (int i = 5; i < 10; i++)  // 새롭게 할당된 arr 배열의 나머지 부분에 10부터 18까지의 2의 배수를 저장
    {
        arr[i] = i * 2;
    }

    for (int i = 0; i < 10; i++)  // arr 배열에 저장된 모든 원소 출력
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // 동적으로 할당했던 메모리 해제

    return 0;  // 프로그램 정상 종료
}
