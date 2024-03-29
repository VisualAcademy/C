#include <stdio.h>

int main(void) {
    //[1] Input 
    int i = 10;
    int j = 0;
    //[2] Process
    j = i++;
    //[3] Output
    printf("j : %d\n", j); // 10
    printf("i : %d\n", i); // 11

    return 0;
}

/*
    증가/감소 연산자 : ++, --
    ++ : 정수형 변수의 값을 1증가
    -- : 정수형 변수의 값을 1감소
    전위 : 변수명 앞에 붙을 때, 증감 후 대입
        우선순위가 제일 높다.
    후위 : 변수명 뒤에 붙을 때, 대입 후 증감
        우선순위가 제일 낮다.
*/
