#include <stdio.h>

//[?] ����ü ����: ȸ�� ����
struct Member
{
    char* Name;	// �̸�
    int		Age; // ����
    double	Weight;	// ������
} objMember = { "��λ�", 100, 70.05 };

int main()
{
    //[!] ����ü(Struct) ���� 
    printf("�̸�: %s, ����: %d, ������: %.2f\n",
        objMember.Name, objMember.Age, objMember.Weight);

    return 0;
}
