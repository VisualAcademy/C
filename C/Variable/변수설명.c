// 변수(Variable) : 메모리 상의 임시 데이터 저장 공간(그릇)
#include <stdio.h>

main()
{
    // 변수 선언 및 초기화 : 키워드 변수명 = 값;
    int i = 1234;			// int : 정수
    long l = 2147483647;	// long : 큰 정수
    char c = 'A';			// char : 문자
    double d = 3.141592;	// double : 실수
    float f = 3.141592;		// float : 실수
    char* s = "안녕하세요.";	// char* : 문자포인터(*) : 문자열 != string 키워드(C#)

    // 변수 참조(사용)
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%f\n", d);
    printf("%10.2f\n", f);
    printf("%s\n", s);

    // int num = 1234; // 변수 선언은 함수의 상단부에서 선언해야 함
}
