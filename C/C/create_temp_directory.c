#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <stdio.h>

int main(void)
{
    char tempPath[MAX_PATH + 1];
    char tempDir[MAX_PATH + 1];
    DWORD result;

    result = GetTempPath(MAX_PATH, tempPath);
    if (result == 0 || result > MAX_PATH) {
        printf("�ӽ� ���͸� ��θ� �������µ� �����߽��ϴ�.\n");
        return 1;
    }

    sprintf(tempDir, "%s\\mytempdir", tempPath);

    if (!CreateDirectory(tempDir, NULL))
    {
        printf("�ӽ� ���͸��� �������� ���߽��ϴ�.\n");
        return 1;
    }

    printf("������ �ӽ� ���͸�: %s\n", tempDir);
    return 0;
}
