#include <stdio.h>

// ���� �Լ� ����
int sum(int f, int s)
{
    return (f + s); 
}

int main(void)
{
    // 2���� int Ÿ�� �Ű� ������ ���� 
    // �Լ��� ����ؼ� ȣ�����ִ� func_sum �̸��� �Լ� ������ ���� 
    int (*func_sum)(int, int); 

    // �Լ� �����Ϳ� �Լ��� ���� �ּ� �Ҵ� 
    func_sum = &sum; 

    // �Լ� �����͸� ����Ͽ� �Լ� ȣ�� 
    printf("%d\n", func_sum(3, 5)); // 8

    return 0;
}
