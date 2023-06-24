#include <stdio.h>

int main(void)
{
    int x = 5;
    char y = 'A';

    // void 포인터 생성
    void* ptr;

    // int 데이터를 가리키도록 void 포인터 설정
    ptr = &x;

    // void 포인터를 int 포인터로 형변환 후 데이터 출력
    printf("정수 값: %d\n", *((int*)ptr));

    // char 데이터를 가리키도록 void 포인터 설정
    ptr = &y;

    // void 포인터를 char 포인터로 형변환 후 데이터 출력
    printf("문자 값: %c\n", *((char*)ptr));

    return 0;
}
