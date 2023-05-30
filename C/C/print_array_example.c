#include <stdio.h>

// 배열을 인자로 받아 원소를 출력하는 함수
void print_array(int* array, int size) // int형 포인터 array와 원소 개수 size를 인자로 받음
{
    for (int i = 0; i < size; i++)  // size 만큼 반복하여
    {
        printf("%d ", array[i]);  // array의 각 원소를 출력
    }
    printf("\n");  // 줄바꿈
}

int main(void)
{
    int array[] = { 1, 2, 3, 4, 5 };  // int형 배열 선언과 초기화
    int size = sizeof(array) / sizeof(int);  // 배열의 크기 계산

    print_array(array, size);  // print_array 함수 호출. 배열과 배열의 크기를 인자로 전달

    return 0;
}
