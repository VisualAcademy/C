#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    char buffer[MAX_SIZE];

    FILE* file = fopen("example.txt", "r");
    if (file == NULL)
    {
        perror("������ �� �� �����ϴ�.");
        return 1;
    }

    size_t read_count = fread(buffer, sizeof(char), MAX_SIZE - 1, file);
    if (read_count == 0)
    {
        perror("���� �б⿡ �����߽��ϴ�.");
        return 1;
    }

    buffer[read_count] = '\0';  // ���ڿ��� ���� �� ���ڸ� �߰��Ͽ� ���ڿ��� �ϼ��մϴ�.
    printf("���Ͽ��� ���� ���ڿ�:\n%s\n", buffer);

    fclose(file);
    return 0;
}
