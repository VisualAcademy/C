#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE* ptr;
    ptr = tmpfile();
    char data[] = "C Language";
    int i = 0;

    // 임시 파일 생성 여부 확인
    if (ptr == NULL)
    {
        printf("임시 파일 생성에 실패했습니다.\n");
        return 1;
    }

    // data 문자열을 임시 파일에 한 글자씩 쓰기
    while (data[i])
    {
        fputc(data[i++], ptr);
    }

    // 파일 포인터를 시작 위치로 이동
    rewind(ptr);

    // 임시 파일의 내용을 한 글자씩 읽어 출력
    while (!feof(ptr))
    {
        printf("%c", fgetc(ptr));
    }

    printf("\n");

    return 0;
}
