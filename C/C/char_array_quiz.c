#include <stdio.h>

int main(void)
{
    char kitty[] = "c@t";

    kitty[1] = 'a'; // �ݵ�� ���� 'a' �Ҵ�

    printf("%s\n", kitty); // cat

    return 0;
}
