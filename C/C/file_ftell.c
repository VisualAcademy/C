#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;
    char file_name[] = "words.txt";
    int size;

    // 파일 열기
    fp = fopen(file_name, "r");
    if (fp == NULL)
    {
        printf("Error opening file %s\n", file_name);
        exit(1);
    }

    // 파일 포인터를 파일 끝으로 옮김
    fseek(fp, 0, SEEK_END);

    // ftell 함수를 사용하여 파일의 크기 구함
    size = ftell(fp);
    printf("Size of %s is %d bytes\n", file_name, size);

    // rewind 함수를 사용하여 파일 포인터를 처음으로 돌림
    rewind(fp);

    // 파일 닫기
    fclose(fp);

    return 0;
}
