/*
    �޸𸮸� 1MByte �Ҵ� �� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void main(void)
{
    // ������ ������ ����
    char* pBuffer;

    // �޸� �Ҵ� �� ������ ����
    pBuffer = malloc(1048576);

    if (pBuffer)
    {
        // �Ҵ�� �޸� ����: NULL
        memset(pBuffer, 0, 1048576);

        // ���ڿ� ����
        strcpy(&pBuffer[0], "�ȳ��ϼ���...");

        // ���ڿ� ���
        puts(&pBuffer[0]);

        // �޸� ����
        free(pBuffer);
    }
}
