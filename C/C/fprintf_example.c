#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    char str[] = "안녕하세요";
    int count = 6;
    fprintf(file, "%s는 %d글자입니다.\n", str, count);

    fclose(file);
    return 0;
}
