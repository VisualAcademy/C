// function_prototype.c - 정상적으로 실행되는 코드
#include <stdio.h>

// [1] 함수 원형 선언
void say();

int main(void)
{
    say();
    return 0;
}

void say()
{
    printf("안녕하세요.\n");
}
