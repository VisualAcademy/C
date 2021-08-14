#include <stdio.h>

int main()
{
    // 문자 배열 개념으로 문자열을 저장
    char s[5] = "Code"; // 저장할 문자열 보다 +1한 값만큼 배열 생성 

    // 문자열을 %s 자리 표시자를 사용하여 출력
    printf("%s\n", s); // 문자 배열 이름으로 문자열 출력

    return 0;
}
