/*
�����ʹ� �ݵ�� ����� ���ÿ� �ʱ�ȭ �Ǿ��� �־�� �Ѵ�.
���߿� �ʱ�ȭ��Ű�� �������� ���� ��ġ�� ���� �� ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) 
{
    int i;

    //������ �迭 ����
    char* a[3];

    // ���� �޸� �Ҵ�
    for (i = 0; i < 3; i++) 
    {
        a[i] = (char*)malloc(100 * sizeof(char));
    }

    scanf("%s %s %s", a[0], a[1], a[2]);

    for (i = 0; i < 3; i++) 
    {
        printf("%s\n", a[i]);
    }

    // ���� �޸� ����
    for (i = 0; i < 3; i++) {
        free(a[i]);
    }

    return 0;
}

//```output
//ȫ�浿 ��λ� �Ѷ��
//ȫ�浿
//��λ�
//�Ѷ��
//```
