#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

// ���ڿ� �񱳸� ���� ����� ���� �Լ�
int compare_strings(const void* str1, const void* str2)
{
    return strcmp(*(const char**)str1, *(const char**)str2);
}

// ���ڿ� �迭 ����� ���� �Լ�
void print_array(const char* arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    const char* search_key = "banana"; // ã���� �ϴ� ���ڿ�
    const char** found_value; // �˻� ����� ������ ������
    const char* words[] = { "cherry", "apple", "pear", "banana", "orange" }; // �˻� ��� ���ڿ� �迭 (���ĵ��� ����)
    int n = sizeof(words) / sizeof(words[0]);

    printf("���� ��: ");
    print_array(words, n); // ���� �� �迭 ���

    // �迭�� ���� ������ ����
    qsort(words, n, sizeof(words[0]), compare_strings);

    printf("���� ��: ");
    print_array(words, n); // ���� �� �迭 ���

    // ���� �˻� ���� (ã���� �ϴ� ��, �迭, �迭 ũ��, �迭 ���� ũ��, �� �Լ�)
    found_value = bsearch(&search_key, words, n, sizeof(words[0]), compare_strings);

    // �˻� ��� ���
    if (found_value)
    {
        printf("%s�� ã�ҽ��ϴ�.\n", *found_value);
    }
    else
    {
        printf("%s�� ã�� ���߽��ϴ�.\n", search_key);
    }

    return 0;
}
