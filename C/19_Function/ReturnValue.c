// ��ȯ���� �ִ� �Լ� ����� ȣ���ϱ� 
#include <stdio.h>

char* GetString()
{
    return "��ȯ��(Return Value)"; // return Ű����� �ܼ� ���ڿ� ��ȯ
}

int main()
{
    // GetString() �Լ� ȣ�� �� ��ȯ�� ��ȯ���� returnValue ������ ����
    char* returnValue = GetString();
    printf("%s\n", returnValue);

    return 0;
}
