#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Job�̶�� �̸��� �������� �����մϴ�.
enum Job
{
    Developer,  // 0
    Instructor, // 1
    Author      // 2
};

int main(void)
{
    // myJob�̶�� ������ Job ���������� �����մϴ�.
    enum Job myJob;

    // ����ڿ��� ������ �����ϵ��� �ȳ��մϴ�.
    printf("������ �����ϼ���\n");
    printf("1. Developer\n");
    printf("2. Instructor\n");
    printf("3. Author\n");

    int choice;
    // ����ڷκ��� �Է��� �޾� choice ������ �����մϴ�.
    scanf("%d", &choice);

    // ������� ���ÿ� ���� myJob ������ ������ �Ҵ��մϴ�.
    switch (choice)
    {
    case 1:
        myJob = Developer;
        break;
    case 2:
        myJob = Instructor;
        break;
    case 3:
        myJob = Author;
        break;
    default:
        // �߸��� �Է��� ��� �ȳ� �޽����� ����ϰ� ���α׷��� �����մϴ�.
        printf("�߸��� �Է��Դϴ�.\n");
        return 1;
    }

    // ������ ������ ����մϴ�.
    printf("������ ����: ");
    switch (myJob)
    {
    case Developer:
        printf("Developer\n");
        break;
    case Instructor:
        printf("Instructor\n");
        break;
    case Author:
        printf("Author\n");
        break;
    }

    return 0;
}
