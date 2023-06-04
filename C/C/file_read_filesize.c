#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;

    // data.txt 파일에 샘플 데이터 쓰기
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다!\n");
        return 1;
    }

    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "C 언어 파일 입출력 예제입니다.\n");
    fclose(fp);

    // data.txt 파일 읽기
    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("파일을 찾을 수 없습니다.\n");
        exit(1);
    }

    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    rewind(fp);

    char* buffer = (char*)malloc(size + 1);  // 널 문자를 위해 1을 추가
    fread(buffer, 1, size, fp);
    buffer[size] = '\0';  // 끝에 널 문자 추가

    fclose(fp);

    printf("읽은 데이터: %s\n", buffer);
    free(buffer);  // 할당한 메모리 해제

    return 0;
}
