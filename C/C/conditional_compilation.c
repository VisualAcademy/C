#include <stdio.h>

#define DEBUG

int main(void)
{
#ifdef DEBUG
    printf("����� ����\n");
#endif
    return 0;
}
