#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h> // ǥ�� ����� �Լ��� ����ϱ� ���� ���̺귯��
#include <ctype.h> // ���� �з� �Լ��� ����ϱ� ���� ���̺귯��
#include <stdbool.h> // �Ҹ��� Ÿ���� ����ϱ� ���� ���̺귯��

int main(void)
{
    FILE* file = fopen("example.txt", "r"); // example.txt ������ �б� ���(r)�� ����
    if (file == NULL) // ���� ���⿡ ������ ���
    {
        printf("���� ���� ����\n");
        return 1;
    }

    int word_count = 0; // �ܾ� ���� ������ ����
    bool is_word = false; // �ܾ� �������� ���θ� ������ ����
    int ch; // ���Ͽ��� ���� ���ڸ� ������ ����
    while ((ch = fgetc(file)) != EOF) // ������ ���� ������ ������ ���ڸ� ����
    {
        if (isspace(ch)) // ���� ������ ���
        {
            if (is_word) // �ܾ� ���ο��� ���� ���ڸ� ���� ���
            {
                word_count++; // �ܾ� ���� ������Ŵ
                is_word = false; // �ܾ� ���ΰ� �ƴ� ������ ǥ��
            }
        }
        else // ���� ���ڰ� �ƴ� ���
        {
            is_word = true; // �ܾ� ������ ������ ǥ��
        }
    }

    if (is_word) // ������ ���� �������� �� �ܾ� ������ ���
    {
        word_count++; // �ܾ� ���� ������Ŵ
    }

    printf("���Ͽ� �ִ� �ܾ� ��: %d\n", word_count); // �ܾ� ���� ���

    fclose(file); // ���� �ݱ�

    return 0;
}
