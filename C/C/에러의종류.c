/*
    에러(Error)/예외(Exception)의 종류
    1. 컴파일(Compile)/빌드(Build) 에러
        문법 오류, 오타 등의 문제로 컴파일러가 발견하고 처리
    2. 런타임(Runtime) 에러
        실행 중에 발생하는 에러, 유효성 검사와 많은 테스트가 필요
    3. 논리(Logical) 에러
        문법상 오류는 없지만, 개발자의 의도와 다르게 동작하는 경우
*/
#include <stdio.h>

int main(void)
{
    //[0] Init
    int a, b, c;
    //[1] Input : 코드, scanf() : 화면, Windows, Website, BarCode
    a = 3;
    b = 0;
    c = 0;
    //[2] Process
    //c = 3 / 0; // <- 무조건 에러...[1] 컴파일에러
    //c = a / b; // 컴파일은 정상, 실행시 에러발생...[2]런타임에러
    c = a + b; // 설계:나눠라... 개발:더하기 : 에러잡기힘듬
    //[3] Output
    printf("c의 결과 : %d\n", c);
    //[4] Dispose
    return 0;
}
