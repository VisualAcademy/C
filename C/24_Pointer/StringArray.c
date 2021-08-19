#include <stdio.h>

int main()
{
    char* languages[3]; // 문자열 배열 선언

    languages[0] = "C";
    languages[1] = "C++";
    languages[2] = "C#";

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", languages[i]);
    }

    return 0;
}
