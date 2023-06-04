#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* fp;
    char file_name[] = "words.txt";
    int size;

    // 파일 쓰기 모드("w")로 열어 샘플 데이터를 저장
    fp = fopen(file_name, "w");
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 샘플 데이터를 파일에 씁니다.
    fprintf(fp, "C Language");

    // 파일 포인터를 파일 끝으로 이동
    fseek(fp, 0, SEEK_END);

    // ftell 함수를 사용하여 파일의 크기 구함
    size = ftell(fp);
    printf("파일 %s의 크기는 %d바이트입니다.\n", file_name, size);

    // rewind 함수를 사용하여 파일 포인터를 처음으로 돌림
    rewind(fp);

    // 파일 닫기
    fclose(fp);

    return 0;
}
