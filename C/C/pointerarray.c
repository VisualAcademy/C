#include <stdio.h>

int main(void)
{
    char a[] = "¾È³ç\0ÇÏ¼¼¿ä.";
    char* b;
    char* c[2];

    b = "¹Ý°©½À´Ï´Ù.";
    c[0] = "¶ÇºÁ~";
    c[1] = "³¾ºÁ~";

    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s %s\n", c[0], c[1]);

    return 0;
}
