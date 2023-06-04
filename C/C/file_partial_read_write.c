// file_partial_read_write.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 200

int main(void)
{
    FILE* fp;
    char buffer[SIZE] = { 0 };

    // 테스트용 데이터를 파일에 쓰기
    fp = fopen("data.txt", "w");  // 파일을 쓰기 모드로 열기
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다!\n");
        return 1;
    }

    char test_data[] = "Hello, C 언어 파일 입출력 예제입니다.";
    fwrite(test_data, sizeof(char), strlen(test_data), fp);
    fclose(fp);  // 쓰기가 끝난 후에 파일을 닫아줍니다.

    // 파일의 일부분만 읽고 쓰기
    fp = fopen("data.txt", "r+");  // 파일을 읽고 쓰기 위해 열기
    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다!\n");
        return 1;
    }

    fseek(fp, 5, SEEK_SET);  // 파일의 5번째 위치로 파일 포인터 이동

    size_t read_size = fread(buffer, sizeof(char), SIZE - 1, fp);  // 5번째 위치부터 데이터 읽기
    buffer[read_size] = '\0';  // NULL 문자를 추가하여 문자열의 끝을 표시
    printf("읽은 데이터: %s\n", buffer);

    fseek(fp, 10, SEEK_SET);  // 파일의 10번째 위치로 파일 포인터 이동

    char write_data[] = "C 언어";  // 쓰기할 데이터
    fwrite(write_data, sizeof(char), strlen(write_data), fp);  // 10번째 위치에 데이터 쓰기

    fclose(fp);

    return 0;
}
