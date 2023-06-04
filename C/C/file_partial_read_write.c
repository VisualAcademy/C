// file_partial_read_write.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 200

int main(void)
{
    FILE* fp;
    char buffer[SIZE] = { 0 };

    // �׽�Ʈ�� �����͸� ���Ͽ� ����
    fp = fopen("data.txt", "w");  // ������ ���� ���� ����
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�!\n");
        return 1;
    }

    char test_data[] = "Hello, C ��� ���� ����� �����Դϴ�.";
    fwrite(test_data, sizeof(char), strlen(test_data), fp);
    fclose(fp);  // ���Ⱑ ���� �Ŀ� ������ �ݾ��ݴϴ�.

    // ������ �Ϻκи� �а� ����
    fp = fopen("data.txt", "r+");  // ������ �а� ���� ���� ����
    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�!\n");
        return 1;
    }

    fseek(fp, 5, SEEK_SET);  // ������ 5��° ��ġ�� ���� ������ �̵�

    size_t read_size = fread(buffer, sizeof(char), SIZE - 1, fp);  // 5��° ��ġ���� ������ �б�
    buffer[read_size] = '\0';  // NULL ���ڸ� �߰��Ͽ� ���ڿ��� ���� ǥ��
    printf("���� ������: %s\n", buffer);

    fseek(fp, 10, SEEK_SET);  // ������ 10��° ��ġ�� ���� ������ �̵�

    char write_data[] = "C ���";  // ������ ������
    fwrite(write_data, sizeof(char), strlen(write_data), fp);  // 10��° ��ġ�� ������ ����

    fclose(fp);

    return 0;
}
