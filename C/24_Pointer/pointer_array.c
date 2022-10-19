#include <stdio.h>

int main()
{
    int arr[3] = { 1, 3, 5 };

    int* ptr1 = arr; //[1] 배열 이름은 배열의 시작 주소
    int* ptr2 = &arr[0]; //[2] 0번째 배열의 시작 주소는 배열의 이름과 동일

    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]); // 배열 직접 출력 
    printf("%d, %d, %d\n", *ptr1, *(ptr1 + 1), *(ptr1 + 2)); // 포인터로 배열 출력
    printf("%d, %d, %d\n", *(ptr2 + 0), *(ptr2 + 1), *(ptr2 + 2));

    return 0;
}
