#include <stdio.h>

//[?] ������ ���ϴ� �Լ� �����
int Abs(int num)
{
    return (num < 0) ? -num : num;
}

int main()
{
    int num = -21;
    int abs = Abs(num);
    printf("%d�� ����: %d\n", num, abs);

    return 0;
}
