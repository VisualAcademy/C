/*
	�޸𸮸� 100MB �Ҵ��ϰ� �����ϱ�
	�Ҵ� : malloc()
	�ʱ�ȭ : memset()
	���� : free()
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <math.h>

void main(void) {
	//������ ����
	char* pBuffer;
	//100MB �Ҵ�
	pBuffer = malloc(100 * pow(2, 20));
	if (pBuffer)
	{
		memset(pBuffer, 0, 100 * pow(2, 20));

		strcpy(&pBuffer[0], "�ȳ��ϼ���...");
		puts(&pBuffer[0]);

		strcpy(&pBuffer[1000], "�ݰ����ϴ�...");
		puts(&pBuffer[1000]);

		free(pBuffer);
	}
}
