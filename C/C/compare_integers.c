#include <stdio.h> 

// �� �Լ�
// �� ���� void �����͸� �Ű������� �޾� int������ ĳ�����Ͽ� ���մϴ�.
// a�� b���� ũ�� ���, a�� b�� ������ 0, a�� b���� ������ ������ ��ȯ�մϴ�.
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main(void) 
{
    int x = 5;
    int y = 10;

    // compare �Լ��� �̿��Ͽ� x�� y�� ���ϰ� �� ����� comparison�� �����մϴ�.
    int comparison = compare(&x, &y);

    if (comparison < 0) 
    {
        printf("x�� y���� �۽��ϴ�.\n");  // comparison�� �����̸� x�� y���� �۽��ϴ�.
    }
    else if (comparison > 0) 
    {
        printf("x�� y���� Ů�ϴ�.\n");  // comparison�� ����̸� x�� y���� Ů�ϴ�.
    }
    else 
    {
        printf("x�� y�� �����ϴ�.\n");  // comparison�� 0�̸� x�� y�� �����ϴ�.
    }

    return 0;
}
