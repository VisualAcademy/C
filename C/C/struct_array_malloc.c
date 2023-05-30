#define _CRT_SECURE_NO_WARNINGS // ��� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  // å ����ü ����
{
    char title[50];
    char author[50];
    int pages;
} Book;

int main(void)
{
    Book* book;  // å ������
    int n, i;

    printf("å�� ������ �Է��ϼ���: ");
    scanf("%d", &n);  // å ���� �Է�

    // �޸� �Ҵ�
    book = (Book*)malloc(n * sizeof(Book));
    if (book == NULL)  // �޸� �Ҵ� Ȯ��
    {
        printf("����! �޸𸮰� �Ҵ���� �ʾҽ��ϴ�.");
        exit(0);
    }

    // å ���� �Է�
    for (i = 0; i < n; ++i)
    {
        printf("å %d�� ����, ����, ������ ���� �Է��ϼ��� (��: �ڵ� ���� 300): ", i + 1);
        scanf("%s %s %d", (book + i)->title, (book + i)->author, &(book + i)->pages);
    }

    printf("���� ǥ��:\n");

    // å ���� ���
    for (i = 0; i < n; ++i)
        printf("����: %s  ����: %s  ������ ��: %d\n", (book + i)->title, (book + i)->author, (book + i)->pages);

    free(book);  // �޸� ����

    return 0;
}
