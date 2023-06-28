#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file;

    // 파일 열기 (쓰기 모드)
    file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일에 데이터 쓰기
    fprintf(file, "이름: %s\n", "홍길동");
    fprintf(file, "나이: %d\n", 30);
    fprintf(file, "키: %.2f\n", 175.5);

    // 파일 닫기
    fclose(file);

    printf("데이터가 example.txt 파일에 저장되었습니다.\n");

    return 0;
}
