/*
    조건문(Conditional Statement)
        : 조건이 참 또는 거짓에 따라서 분기
*/
#include <stdio.h>

void main() {
    //[0]
    int i = 0;
    printf("정수를 하나 입력 : _\b");
    scanf("%d", &i); // 정수를 입력받아 i변수에 저장
    printf("입력하신 자료 : %d\n", i);

    //[1] 단순 if문
    if (i % 2 == 0) {               // 조건식 : 짝수라면,
        printf("짝수입니다.\n");   // 실행문
    }
    //[2] else문
    if (i % 2 != 0) {
        printf("홀수입니다.\n"); // 참일때 실행
    }
    else {
        printf("짝수입니다.\n"); // 거짓일 때 실행
    }
    //[3] 다중 if문
    if (i % 3 == 0)
    {
        printf("3의 배수\n");
    }
    else if (i % 5 == 0)
    {
        printf("5의 배수\n");
    }
    else if (i % 7 == 0)
    {
        printf("7의 배수\n");
    }
    else
    {
        printf("3,5,7의 배수가 아닌 수\n");
    }

}
