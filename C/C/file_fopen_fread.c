#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 200

int main(void)
{
    FILE* fp;
    char buffer[SIZE];

    fp = fopen("data.bin", "rb");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    int items_read = fread(buffer, sizeof(char), SIZE, fp);
    printf("%d items read from file\n", items_read);
    fclose(fp);

    return 0;
}
