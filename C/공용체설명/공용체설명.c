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
    union Member m;

    m.Name = "ȫ�浿";		// ����
    printf("%s\n", m.Name);	// ���
    m.Age = 21;
    printf("%d\n", m.Age);
    m.Weight = 100.05;
    printf("%.2f\n", m.Weight);

    //printf("%s, %d, %.2f\n", m.Name, m.Age, m.Weight);

    return 0;
}
