#include <stdio.h>

int main(void)
{
    char kitty[] = "c@t";

    kitty[1] = 'a'; // 반드시 문자 'a' 할당

    printf("%s\n", kitty); // cat

    return 0;
}
