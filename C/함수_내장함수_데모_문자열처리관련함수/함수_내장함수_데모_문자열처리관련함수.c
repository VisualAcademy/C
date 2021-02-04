/*
	���ڿ� ó�� ���� �Լ�
*/
#include <stdio.h>
#include <string.h>

void main(void)
{
	// ���� ������
	char str[] = "Abc Def Fed Cba";
	char strr[] = "abcd";
	char str1[80];
	char str2[80];

	printf("%s\n", str);

	// strlen() : ���ڿ��� ����
	printf("���ڿ��� ���� : %d\n", strlen(str)); // length

	// strlwr() : �ҹ��ڷ� ��ȯ
	printf("�ҹ��ڷ� : %s\n", strlwr(str)); // lower

	// strupr() : �빮�ڷ� ��ȯ
	printf("�빮�ڷ� : %s\n", strupr(str)); // upper

	// strrev() : �Ųٷ� ��ȯ
	printf("�Ųٷ� : %s\n", strrev(strr)); // reverse

	// strset() : ä���
	printf("ä��� : %s\n", strset(strr, '*'));

	// strnset() : n�� ä���
	printf("n�� ä��� : %s\n", strnset(str, '*', 5));

	// strcpy() : ����
	printf("���� : %s\n", strcpy(str1, "Abc")); // copy
	printf("���� : %s\n", strcpy(str2, "aBC"));

	// strcmp() : ��, ������ 0�� ��ȯ
	if (strcmp(str1, str2) == 0)				// compare
	{
		printf("%s�� %s�� ����\n", str1, str2);
	}
	else
	{
		printf("%s�� %s�� �ٸ�\n", str1, str2);
	}

	// strchr() : ���ڿ����� Ư�� ���� ���ķ� ���
	printf("%s\n", strchr(str2, 'B')); // "aBC" => BC

	// strstr() : ���ڿ����� Ư�� ���ڿ� ���� ��ġ
	printf("%s\n", strstr(str2, "aa")); // "aBC" => null(0)

	printf("%s, %s\n", str1, str2); // Abc, aBC

	// strcat() : ����
	strcat(str1, str2); // concat
	printf("%s\n", str1); // AbcaBC
}
