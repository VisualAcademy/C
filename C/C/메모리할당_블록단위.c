#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef char* string;

void main()
{
	//[1] �޸� �Ҵ�� ������ ����
	string s;
	//[2] �����ͺ����� ���ڿ� �Ҵ�(�޸� �ڵ� �Ҵ�)
	s = calloc(20, sizeof(int));
	//[3] ���α׷������� �ش� ������ ä��
	strcpy(s, "�ݰ����ϴ�.");
	//[4] ���
	printf("%s\n", s);
	//[5] �Ҵ�� �޸��� ũ�� ���
	printf("%d\n", sizeof(s));//4Byte
	printf("%d\n", _msize(s));//80Byte
	//[6] �Ҵ�� �޸��� ũ�� ����
	s = realloc(s, 200);
	strcpy(s, "�ݰ����ϴ�.�Ǹ�����.");
	printf("%s\n", s);
	printf("%d\n", _msize(s));//80Byte
	//[7] ������ : �ش� �޸� ���� ����
	free(s);
}
