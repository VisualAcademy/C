/*
    7.15. 예제. 복수개의 문자열 입력(포인터 사용) : 포인터사용복수문자열입력.c
*/
#include <stdio.h>

int main(void)
{
    int i;

    //포인터 배열 선언
    static char* a[3];

    //입력될 문자수만큼 공백으로 초기화
    a[0] = "     ";
    a[1] = "     ";
    a[2] = "     ";

    scanf("%s %s %s", a[0], a[1], a[2]);

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}
/*
결과
홍길동 백두산 한라산
홍길동
백두산
한라산
*/
