// getchar() �Լ�: Ű����κ��� �ϳ��� ���� �Է�
#include <stdio.h> // getchar()

int main()
{
    char bloodType;

    printf("����� ��������? _\b");
    bloodType = getchar();
    printf("%c���Դϴ�.\n", bloodType);

    return 0;
}
