#include <stdio.h>

int main(void)
{
    char* p = "안녕하세요. 반갑습니다.";  // 포인터 변수 p를 선언하고, 문자열을 가리키도록 초기화

    printf("%s\n", p);         // p가 가리키는 문자열 전체를 출력
    printf("%s\n", p + 4);     // p가 가리키는 문자열에서 4번째 인덱스부터 출력
    printf("%s\n", p + 12);    // p가 가리키는 문자열에서 12번째 인덱스부터 출력

    return 0;
}
