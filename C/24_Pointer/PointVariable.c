#include <stdio.h>

main()
{
    //[1] 일반 변수 선언과 동시에 초기화
    int num = 1234;

    //[2] 포인터 변수 선언과 동시에 num 변수를 ptr 변수로 참조(Reference)
    int* ptr = &num; // & 기호로 num 변수의 주솟값을 읽어 포인터 변수에 저장

    //[3] ptr 변수로 참조된 값 출력
    printf("%d\n", *ptr); // * 기호로 ptr 변수가 참조하고 있는 곳의 값을 출력
}
