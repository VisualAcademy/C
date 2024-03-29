#include <stdio.h>

int main()
{
    //[1] 문자열 선언과 동시에 초기화
    char* name = "김서울";

    //[2] 문자열 포인터 선언 후 초기화 
    char* address;
    address = "SEOUL"; // 문자열(문자 배열)의 시작 주소를 포인터에 저장 

    // 전체 출력
    printf("%s - %s\n", name, address);

    // 부분 출력(인덱스 이후로 출력): 한글은 2byte 문자
    printf("%s - %s\n", (name + 2), (address + 3));

    return 0;
}
