#include <stdio.h>

int main(void)
{
    FILE* fp;
    char c = 'A';

    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.");
        return -1;
    }

    fputc(c, fp);
    fclose(fp);

    return 0;
}
