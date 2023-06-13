#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str1[] = "C Programming language";
    const char str2[] = "Pro";

    printf("str2의 문자들이 str1에 처음 나타나는 위치까지의 길이: %lu\n",
        strcspn(str1, str2));
    return(0);
}
