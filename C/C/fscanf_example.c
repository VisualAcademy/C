#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* file = fopen("test.txt", "r");
    if (file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int count;
    char str[100];
    fscanf(file, "%s %d", str, &count);
    printf("%s는 %d개의 문자를 가지고 있습니다.\n", str, count);

    fclose(file);
    return 0;
}
