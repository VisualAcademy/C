#include <stdio.h>

int main(void)
{
    char buffer[100];

    FILE* file = fopen("example.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // 버퍼에서 100 바이트만큼 문자열을 읽습니다.
    size_t read_count = fread(buffer, sizeof(char), 100, file);
    if (read_count == 0)
    {
        perror("Error reading file");
        return 1;
    }

    // 버퍼에서 읽은 문자열을 화면에 출력합니다.
    printf("Read %ld bytes from the file:\n%s\n", read_count, buffer);

    fclose(file);
    return 0;
}
