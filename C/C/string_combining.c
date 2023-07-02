#include <stdio.h>

#define TO_STRING(x) #x
#define COMBINE_STRINGS(a, b) TO_STRING(a) TO_STRING(b)

int main(void)
{
    const char* result = COMBINE_STRINGS(Hello, World);

    printf("%s\n", result); // "HelloWorld" Ãâ·Â

    return 0;
}
