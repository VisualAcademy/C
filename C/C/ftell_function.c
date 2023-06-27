#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // "example.txt" 파일을 읽기-쓰기 모드로 열기
    FILE* file = fopen("example.txt", "w+");

    // 파일 열기가 실패한 경우 확인
    if (file == NULL)
    {
        printf("파일을 열지 못했습니다.\n");
        return 1;
    }

    // 파일에 "Hello, World!" 쓰기
    fprintf(file, "Hello, World!");

    // 파일 포인터의 현재 위치 얻기
    long position = ftell(file);

    // 위치를 성공적으로 가져왔는지 확인하고 위치 출력
    if (position != -1L)
    {
        printf("파일 포인터의 현재 위치: %ld\n", position);
    }
    else
    {
        printf("위치를 가져오는데 실패했습니다.\n");
    }

    // 파일 닫기
    fclose(file);
    return 0;
}
