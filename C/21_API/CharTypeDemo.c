#include <stdio.h>
#include <ctype.h>

main()
{
    char c = 'A';

    printf("문자: %c(%d)\n", c, c);
    printf("소문자: %c(%d)\n", tolower(c), tolower(c));
    printf("대문자: %c(%d)\n", toupper(c), toupper(c));    
}
