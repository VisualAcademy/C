#define _CRT_SECURE_NO_WARNINGS  // ���� ��� ���� ���� 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����ü ���� �� ��Ī ����
typedef struct
{
    int age;
    char name[20];
} Person;

int main(void)
{
    Person* ptr;
    int i, n;

    printf("����� ���� �Է��ϼ���: ");
    scanf("%d", &n);

    // �޸� ���� �Ҵ�
    ptr = (Person*)malloc(n * sizeof(Person));
    if (ptr == NULL)
    {
        printf("����! �޸𸮰� �Ҵ���� �ʾҽ��ϴ�.");
        exit(0);
    }

    // ����ü�� ���� �Է�
    for (i = 0; i < n; ++i)
    {
        printf("��� %d�� ���̿� �̸��� �Է��ϼ���: ", i + 1);
        scanf("%d %s", &(ptr + i)->age, (ptr + i)->name);
    }

    printf("�Է��� ������ ������ �����ϴ�:\n");

    // ����ü ���� ���
    for (i = 0; i < n; ++i)
    {
        printf("����: %d  �̸�: %s\n", (ptr + i)->age, (ptr + i)->name);
    }

    // �������� �Ҵ�� �޸� ����
    free(ptr);

    return 0;
}
