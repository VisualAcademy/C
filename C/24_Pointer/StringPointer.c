#include <stdio.h>

int main()
{
    //[1] ���ڿ� ����� ���ÿ� �ʱ�ȭ
    char* name = "�輭��";

    //[2] ���ڿ� ������ ���� �� �ʱ�ȭ 
    char* address;
    address = "SEOUL"; // ���ڿ�(���� �迭)�� ���� �ּҸ� �����Ϳ� ���� 

    // ��ü ���
    printf("%s - %s\n", name, address);

    // �κ� ���(�ε��� ���ķ� ���): �ѱ��� 2byte ����
    printf("%s - %s\n", (name + 2), (address + 3));

    return 0;
}
