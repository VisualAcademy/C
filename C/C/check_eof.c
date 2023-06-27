#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // "test.txt" 파일을 쓰기와 읽기 모드(w+)로 열기
    FILE* file = fopen("test.txt", "w+");

    // 파일 열기가 성공적이지 않은 경우 에러 메시지 출력
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // "End Of File" 문자열을 파일에 쓰기
    fputs("End Of File", file);

    // 파일 포인터를 파일의 처음으로 되돌리기
    rewind(file);

    char c;
    // 파일에서 문자를 하나씩 읽어 출력하기. EOF에 도달할 때까지 반복
    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);
    }

    // 파일의 끝(EOF)에 도달했는지 확인
    if (feof(file))
    {
        printf("\n파일의 끝에 도달하였습니다.\n");
    }
    else
    {
        printf("\n파일 읽기가 완료되었습니다.\n");
    }

    // 파일을 닫기
    fclose(file);
    return 0;
}
