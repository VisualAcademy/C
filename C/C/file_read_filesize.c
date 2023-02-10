#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // 파일 포인터 생성
    FILE* fp;

    // 파일 읽기 모드로 열기
    fp = fopen("data.bin", "rb");

    // 파일이 존재하지 않을 경우
    if (fp == NULL) 
    {
        printf("File not found\n");
        exit(1);
    }

    // 파일 크기 구하기
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);

    // 파일 포인터를 처음으로 돌리기
    rewind(fp);

    // 버퍼 생성
    char buffer[size];

    // 파일 크기만큼 읽기
    fread(buffer, 1, size, fp);

    // 파일 닫기
    fclose(fp);

    // 읽은 데이터 출력
    printf("Read data: %s\n", buffer);

    return 0;
}
