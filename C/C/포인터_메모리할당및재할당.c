#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //[1] Init
    char* p;

    char i = 0;
    // ������ ���� ����

    // ������ ������ �޸� �Ҵ�
    //p = (char *)malloc(sizeof(char) * 10);     // 1�� �޸� �Ҵ� ���
    p = (char*)calloc(5, sizeof(char));        // 2�� �޸� �Ҵ� ���
    p = (char*)realloc(p, 10 * sizeof(char));  // �޸� ���Ҵ� ���

    // �ʱ�ȭ
    *(p + 0) = 'a';
    *(p + 1) = 'b';

    // ����
    for (i = 0; i < 10; i++)
    {
        printf("%c \n", *(p + i));
    }

    // ������ ����
    free(p);

    return 0;
}
