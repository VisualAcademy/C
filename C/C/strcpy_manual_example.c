#include <stdio.h>

int main(void)
{
    char src[50] = "Hello, World!";
    char dest[50];
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // 문자열의 끝을 나타내는 NULL 문자를 복사

    printf("복사된 문자열: %s\n", dest);

    return 0;
}
