#include <stdio.h>

void increment()
{
    int local_var = 0;        // �Ϲ� ���� ����
    static int static_var = 0; // static ���� ����

    local_var++;   // �� ȣ�⸶�� �ʱ�ȭ
    static_var++;  // �� ����

    printf("local_var = %d, static_var = %d\n", local_var, static_var);
}

int main()
{
    increment(); // ���� ����
    increment(); // local_var �ʱ�ȭ, static_var ����
    increment(); // local_var �ʱ�ȭ, static_var ����
    return 0;
}
