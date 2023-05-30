#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr;

    // int 형을 저장할 수 있는 메모리를 동적으로 할당합니다.
    ptr = (int*)malloc(sizeof(int));

    // 메모리 할당에 실패한 경우 에러 메시지를 출력하고 프로그램을 종료합니다.
    if (ptr == NULL)
    {
        printf("메모리 할당에 실패했습니다.\n");
        return 1;
    }

    // 동적으로 할당된 메모리에 10을 저장합니다.
    *ptr = 10;

    // 동적으로 할당된 메모리에 저장된 값을 출력합니다.
    printf("%d\n", *ptr);

    // 동적으로 할당된 메모리를 해제합니다.
    free(ptr);

    return 0;
}
