//[?] strstr �Լ��� ���ڿ� �˻��ϱ�
#include <stdio.h>
#include <string.h> // ���ڿ� ���� �Լ��� ����ϱ� ���� ��� ���� ����

int main(void)
{
    // ���ڿ� "C Coding!!!"�� �����ϴ� char �迭 buffer ���� �� �ʱ�ȭ
    char buffer[] = "C Coding!!!";

    // buffer���� "ing"�̶�� ���ڿ��� �˻��ϰ�, �˻��� ��ġ�� ����Ű�� ������ pfind�� ����
    char* pfind = strstr(buffer, "ing");

    // pfind�� ����Ű�� ��ġ���� ���ڿ��� ���
    printf("%s\n", pfind); // ing!!!

    return 0;
}
