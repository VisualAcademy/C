#include <stdio.h>

int main(void)
{
    int x = 10;
    float y = 20.5;
    char c = 'A';

    // 범용 포인터인 void* 타입의 ptr을 선언합니다.
    // 이 ptr은 어떤 타입의 변수의 주소라도 저장할 수 있습니다.
    void* ptr;

    // ptr에 int 타입 변수 x의 주소를 저장합니다.
    ptr = &x;
    // ptr이 가리키는 주소의 값을 int 타입으로 간주하고 역참조하여 출력합니다.
    printf("ptr이 가리키는 정수 값: %d\n", *(int*)ptr);

    // ptr에 float 타입 변수 y의 주소를 저장합니다.
    ptr = &y;
    // ptr이 가리키는 주소의 값을 float 타입으로 간주하고 역참조하여 출력합니다.
    printf("ptr이 가리키는 실수 값: %.1f\n", *(float*)ptr);

    // ptr에 char 타입 변수 c의 주소를 저장합니다.
    ptr = &c;
    // ptr이 가리키는 주소의 값을 char 타입으로 간주하고 역참조하여 출력합니다.
    printf("ptr이 가리키는 문자 값: %c\n", *(char*)ptr);

    return 0;
}
