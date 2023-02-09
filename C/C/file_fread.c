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

    // ���ۿ��� 100 ����Ʈ��ŭ ���ڿ��� �н��ϴ�.
    size_t read_count = fread(buffer, sizeof(char), 100, file);
    if (read_count == 0)
    {
        perror("Error reading file");
        return 1;
    }

    // ���ۿ��� ���� ���ڿ��� ȭ�鿡 ����մϴ�.
    printf("Read %ld bytes from the file:\n%s\n", read_count, buffer);

    fclose(file);
    return 0;
}
