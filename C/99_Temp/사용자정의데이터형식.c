/*
����� ���� ������ ���� : ���ο� ������ ������ ����
*/
#include <stdio.h>
//��ũ�� ���
#define true 1
#define false 0
//��������� ���������� ����
typedef char* string;
typedef int bool;
int main(void) {
	int i;		char c;		float f;	double d;
	string s;//���ڿ��� ������ �� �ִ� Ű���� string ����
	bool b; //�� �Ǵ� ������ ������ �� �ִ� Ű���� bool ����
	i = 10; c = 'A'; f = 3.141592;
	d = 1234.1234;
	s = "�ȳ��ϼ���.";
	b = false;
	if (b != true) {
		printf("b�� ����\n");
	}
	else {
		printf("b�� ��\n");
	}
}
