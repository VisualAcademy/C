#include <stdio.h>

//[1] 함수 원형 선언
void say();

int main()
{
    say();
    return 0;
}

//[2] 함수 본문 정의
void say()
{
    printf("안녕하세요.\n");
}
