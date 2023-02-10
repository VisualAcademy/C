#include <sys/stat.h>
#include <stdbool.h>
#include <stdio.h>

bool is_dir_exists(const char* path)
{
    struct stat sb;
    return stat(path, &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s directory_path\n", argv[0]);
        return 1;
    }

    const char* dir_path = argv[1];
    if (is_dir_exists(dir_path))
    {
        printf("Directory exists: %s\n", dir_path);
    }
    else
    {
        printf("Directory does not exist: %s\n", dir_path);
    }

    return 0;
}
