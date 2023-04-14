/*
포인터는 반드시 선언과 동시에 초기화 되어져 있어야 한다.
나중에 초기화시키면 포인터의 시작 위치를 구할 수 없다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) 
{
    int i;

    //포인터 배열 선언
    char* a[3];

    // 동적 메모리 할당
    for (i = 0; i < 3; i++) 
    {
        a[i] = (char*)malloc(100 * sizeof(char));
    }

    scanf("%s %s %s", a[0], a[1], a[2]);

    for (i = 0; i < 3; i++) 
    {
        printf("%s\n", a[i]);
    }

    // 동적 메모리 해제
    for (i = 0; i < 3; i++) {
        free(a[i]);
    }

    return 0;
}

//```output
//홍길동 백두산 한라산
//홍길동
//백두산
//한라산
//```
