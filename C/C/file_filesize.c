#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp;
    long file_size;

    fp = fopen("data.bin", "rb");
    if (fp == NULL)
    {
        printf("Unable to open the file\n");
        return 1;
    }

    // Move the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // Get the current position of the file pointer
    file_size = ftell(fp);

    // Print the file size
    printf("The size of the file is: %ld bytes\n", file_size);

    fclose(fp);
    return 0;
}
