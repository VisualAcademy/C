#include <stdio.h>

//[!] ����ü ����: ȸ�� ����
struct Member
{
    char* Name;	// �̸�
    int		Age; // ����
    double	Weight; // ������
};

int main()
{
    //[1][2] ����ü �迭 ����� ���ÿ� �ʱ�ȭ
    struct Member m[] =
    {
        {"ȫ�浿", 21, 100.05}, {"��λ�", 100, 70.05}, {"�Ӳ���", 40, 150.00}
    };

    //[3] ����
    for (int i = 0; i < 3; i++)
    {
        printf("%s, %3d, %6.2f\n", m[i].Name, m[i].Age, m[i].Weight);
    }

    return 0;
}
