// �����͸� ����� ���ڿ� ��� ����
#include <stdio.h>

int main(void)
{
    // C���: ���ڿ� ó�� Ű����: X, Java/C#: String Ű����
    //string s = "�ȳ��ϼ���...";
    char* str;

    str = "�ȳ��ϼ���. �ݰ����ϴ�."; // �ѱ�/�Ͼ�/�߱���: 2byte�ڵ�, ����: 1byte�ڵ�

    printf("%s\n", str);		// ��ü ���
    printf("%s\n", str + 12);	// �ݰ����ϴ�.
    printf("%s\n", str + 3);	// '��'�� ���ʸ� ����ϴٺ��� ������ ������

    str = "����� ���� �����"; // ���, scanf() ���� �Ұ�
    printf("%s\n", str);		// ��ü ���

    return 0; 
}
