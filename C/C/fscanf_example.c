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

    char str[100];
    int count;
    fscanf(file, "%99s은(는) %d개의 문자를 가지고 있습니다.\n", str, &count);
    printf("%s은(는) %d개의 문자를 가지고 있습니다.\n", str, count);

    fclose(file);
    return 0;
}
