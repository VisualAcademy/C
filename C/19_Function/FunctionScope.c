// Function Scope: �Լ� ����, ���� ������ ���� ����
#include <stdio.h>

char* message = "���� ����";

void ShowMessage()
{
    char* message = "���� ����";
    printf("%s\n", message);  // ���� ����
}

int main()
{
    ShowMessage(); // ���� ����
    printf("%s\n", message); // ���� ����

    return 0;
}
