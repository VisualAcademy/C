// ���ǿ�����(3�׿�����) => ? :
// (���ǽ�) ? ���϶����๮�� : �����϶����๮��;
#include <stdio.h>

int main(void)
{
    int num = 9;
    char result;

    // 3�� ������(if���� ����)
    result = (num % 2 == 0) ? 'T' : 'F';

    printf("��� : %c\n", result);

    return 0; 
}
