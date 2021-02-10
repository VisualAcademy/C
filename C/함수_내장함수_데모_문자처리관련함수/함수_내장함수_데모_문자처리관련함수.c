// �Լ�_�����Լ�_����_����ó�������Լ�.c
#include <stdio.h>
#include <ctype.h> // ���� ó�� ���� �Լ�

void main(void)
{
	// ���� ������ : ���ڹ迭(���ڿ�)
	char str[] = "A1b2c D3e4f\0F4e3d C2b1a";

	// ù��°(0) ���� ���
	printf("%c\n", str[0]); // A
	// ���ڿ� ���
	printf("%s\n", str);	// A1b2c... : \0 => ���Ṯ�ڿ�(���ڿ��� ��)

	// isalpha() �Լ� : ���ĺ��̸� 1(��)
	if (isalpha(str[0]))
	{
		printf("%c�� ���ĺ� ����\n", str[0]);
	}

	// isdigit() �Լ� : �����̸� 1(true)
	if (isdigit(str[1]))
	{
		printf("%c�� ����\n", str[1]);
	}

	// isalnum() �Լ� : ���ĺ� �Ǵ� �����̸� true
	if (isalnum(str[2]) && isalnum(str[3])) // b && 2
	{
		printf("%c�� %c�� ���ĺ� �Ǵ� ����\n", str[2], str[3]);
	}

	// isupper() �Լ� : �빮���̸� 1
	if (isupper(str[0])) // A
	{
		printf("%c�� �빮��\n", str[0]);
	}
	else
	{
		printf("%c�� �ҹ���\n", str[0]);
	}

	// islower() �Լ� : �ҹ����̸� 1
	if (islower(str[2])) // b
	{
		printf("%c�� �ҹ���\n", str[2]);
	}
	else
	{
		printf("%c�� �빮��\n", str[2]);
	}

	// isspace() �Լ� : ����/��/���� �����̸� 1
	if (isspace(str[5])) // 5��° �ε����� ���ڰ��� �����̳�?
	{
		printf("%c�� ����/��/����\n", str[5]);
	}

	// �빮�ڷ� ��ȯ
	printf("%c => %c\n", str[2], toupper(str[2]));
	// �ҹ��ڷ� ��ȯ
	printf("%c => %c\n", str[0], tolower(str[0]));
}
