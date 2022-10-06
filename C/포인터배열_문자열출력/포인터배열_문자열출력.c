// 포인터를 사용한 문자열 출력 제어
#include <stdio.h>

int main(void)
{
    // C언어: 문자열 처리 키워드: X, Java/C#: String 키워드
    //string s = "안녕하세요...";
    char* str;

    str = "안녕하세요. 반갑습니다."; // 한글/일어/중국어: 2byte코드, 영어: 1byte코드

    printf("%s\n", str);		// 전체 출력
    printf("%s\n", str + 12);	// 반갑습니다.
    printf("%s\n", str + 3);	// '녕'을 반쪽만 출력하다보니 깨져서 보여짐

    str = "상수에 값을 덮어쓰기"; // 허용, scanf() 접근 불가
    printf("%s\n", str);		// 전체 출력

    return 0; 
}
