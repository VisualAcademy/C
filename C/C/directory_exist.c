#include <io.h>
#include <stdio.h>

int main(void)
{
    const char* dir_path = "C:\\temp";
    if (_access(dir_path, 0) != -1)
    {
        printf("���͸��� �����մϴ�: %s\n", dir_path);
    }
    else
    {
        printf("���͸��� �������� �ʽ��ϴ�: %s\n", dir_path);
    }

    return 0;
}
