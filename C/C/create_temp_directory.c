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
        printf("임시 디렉터리 경로를 가져오는데 실패했습니다.\n");
        return 1;
    }

    sprintf(tempDir, "%s\\mytempdir", tempPath);

    if (!CreateDirectory(tempDir, NULL))
    {
        printf("임시 디렉터리를 생성하지 못했습니다.\n");
        return 1;
    }

    printf("생성된 임시 디렉터리: %s\n", tempDir);
    return 0;
}
