//[?] getchar() �Լ�: ǥ�� �Է�(stdin)���� ���� �ϳ��� �Է�
#include <stdio.h>

int main()
{
    int anykey;

    printf("Ű���忡�� �ƹ�Ű�� ������ ����ġ����.\n");
    anykey = getchar();
    printf("�Է��� ���� %c�Դϴ�.\n", anykey);

    return 0;
}
