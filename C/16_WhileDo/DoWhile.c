// do while 문을 사용하여 "안녕하세요." 3번 출력하기
#include <stdio.h>

main()
{
    int count = 0;                  // 초기식

    do
    {
        printf("안녕하세요.\n");     // 실행문
        count++;                    // 증감식
    } while (count < 3);            // 조건식
}
