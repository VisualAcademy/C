#include <stdio.h>

int main(void)
{
    FILE* fp;
    char c = 'A';

    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("������ �� �� �����ϴ�.");
        return -1;
    }

    fputc(c, fp);
    fclose(fp);

    return 0;
}
