#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int* p = (int*)calloc(10, sizeof(int)); // �޸� �Ҵ�� ���ÿ� �ʱ�ȭ(0)
    p = (int*)realloc(p, 20 * sizeof(int)); // ���Ҵ�(���� �ڷ� ����)

    for (i = 0; i < 20; i++)
    {
        printf("%d\n", p[i]); // �Ҵ�� �޸� ���
    }

    free(p); // �޸� ����
    return 0;
}
