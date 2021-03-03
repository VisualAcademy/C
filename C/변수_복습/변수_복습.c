/*
    변수(Variable) :
        -하나의 이름으로 하나의 데이터 형식을
         저장해 놓는 메모리상의 데이터 저장 공간
        -변하는 수
    데이터형식(DataType) :
        정수 : int
        실수 : double
        문자 : char
        문자열 : string -> char* : 포인터
        불린(Boolean) : bool -> int(1:있다/True, 0:없다/False)
*/
#include <stdio.h>

void main()
{
    //[1] 변수 선언
    int i;
    //[2] 변수 초기화(할당)
    i = 100;
    //[3] 변수 참조(가져다 쓰기)
    printf("%d\n", i);
}
