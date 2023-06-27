#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // "test.txt" 파일 열기 (읽기-쓰기 모드)
    FILE* file = fopen("test.txt", "w+");

    // 파일 열기 실패 시, 에러 메시지 출력
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // "Hello, World!" 문자열 파일에 쓰기
    fprintf(file, "Hello, World!");

    // 파일 포인터 위치 이동 (파일 시작으로부터 7바이트 뒤로)
    if (fseek(file, 7, SEEK_SET) == 0)
    {
        printf("파일 포인터의 위치가 성공적으로 변경되었습니다.\n");
    }
    else
    {
        printf("위치를 변경하는데 실패했습니다.\n");
        fclose(file);
        return 1;
    }

    // 파일로부터 문자열 읽기 및 출력
    char buffer[20];
    if (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("파일로부터 읽은 문자열: %s\n", buffer);
    }
    else
    {
        printf("파일로부터 읽기를 실패했습니다.\n");
    }

    // 파일 닫기
    fclose(file);
    return 0;
}
