#include <stdio.h>
#include <string.h>

void main()
{
    //정수값/문자값 비교

    char* i = "안녕";
    char* j = "안녕2";

    // 문자열 비교
    // if (i == j)
    if (strcmp(i, j) == 0)
    {
        printf("같습니다.\n");
    }
    else
    {
        printf("다릅니다.\n");
    }
}
