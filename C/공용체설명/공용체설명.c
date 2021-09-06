// ����ü(Union): ����ü�� ������ ����� �����ϳ� �޸𸮸� ����(����)�ؼ� ���
#include <stdio.h>

// ����ü ����: union => struct/class
union Member
{
    char* Name;
    int		Age;
    double	Weight;
};

int main(void)
{
    // ����ü ������ ���� ����
    union Member member;

    member.Name = "ȫ�浿";            // ����
    printf("%s\n", member.Name);      // ���

    member.Age = 21;
    printf("%d\n", member.Age);

    member.Weight = 100.05;
    printf("%.2f\n", member.Weight);

    //printf("%s, %d, %.2f\n", member.Name, member.Age, member.Weight);

    return 0;
}
