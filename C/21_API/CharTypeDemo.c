#include <stdio.h>
#include <ctype.h>

main()
{
    char c = 'A';

    printf("����: %c(%d)\n", c, c);
    printf("�ҹ���: %c(%d)\n", tolower(c), tolower(c));
    printf("�빮��: %c(%d)\n", toupper(c), toupper(c));    
}
