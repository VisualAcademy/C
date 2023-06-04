#include <io.h>
#include <stdio.h>

int main(void)
{
    const char* dir_path = "C:\\temp";
    if (_access(dir_path, 0) != -1)
    {
        printf("디렉터리가 존재합니다: %s\n", dir_path);
    }
    else
    {
        printf("디렉터리가 존재하지 않습니다: %s\n", dir_path);
    }

    return 0;
}
