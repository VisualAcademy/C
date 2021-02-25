#include <stdio.h>

void main(void)
{
    // a[n] = a[0] = 1, a[1] = 2, ... a[n-1] = 5;
    int a[5] = { 1, 2, 3, 4, 5 };
    int sum = 0;//짝수의 합
    int i = 0;

    //[!] Process
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }

    printf("%d\n", sum);//6
}
/*
C언어 학습 순서

1. 기본구조
2. 출력문 : printf(), scanf()
3. 변수/데이터형식 : int, char, float, double, sizeof()
4. 연산자 : +, -, *, /, %, +=, ++, --, &&, ||, !, ==, !=
5. 제어문 : if, switch, for, while, do, break, continue, goto
6. 배열(Array) : 1차원배열, 2차원배열


- 변수(Variable) : 하나의 이름으로 하나의 데이터형식(타입)을 하나만 저장 가능한 공간(그릇)
- 배열(Array) : 변수의 확장. 하나의 이름으로 하나의 데이터형식을 여러개 저장 가능한 공간
- 구조체(Struct) : 변수/배열의 확장. 하나의 이름으로 여러개의 데이터형식을 여러개 저장 가능한 공간
- 클래스(Class) : C++이상 언어에서만 제공. 변수/배열/구조체의 확장. 하나의 이름으로 여러개의 데이터형식과 동작(메서드)을 포함해서 저장해 놓는 그릇 역할
*/
