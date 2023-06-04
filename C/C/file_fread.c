#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    char buffer[MAX_SIZE];

    FILE* file = fopen("example.txt", "r");
    if (file == NULL)
    {
        perror("파일을 열 수 없습니다.");
        return 1;
    }

    size_t read_count = fread(buffer, sizeof(char), MAX_SIZE - 1, file);
    if (read_count == 0)
    {
        perror("파일 읽기에 실패했습니다.");
        return 1;
    }

    buffer[read_count] = '\0';  // 문자열의 끝에 널 문자를 추가하여 문자열을 완성합니다.
    printf("파일에서 읽은 문자열:\n%s\n", buffer);

    fclose(file);
    return 0;
}
